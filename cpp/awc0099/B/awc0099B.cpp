#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> books(m);
    for (int i = 0; i < m; i++)
    {
        int u, v; // 흥미, 어려움
        cin >> u >> v;
        books[i] = {v, u}; // 어려움, 흥미
    }
    sort(books.begin(), books.end());

    for (int i = 1; i < m; i++)
    {
        books[i] = {books[i].first, max(books[i - 1].second, books[i].second)};
    }

    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        int l = 0;
        int r = m - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (books[mid].first > temp)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(r<0 || r>m-1) {
            continue;
        }
        else {
            res+=books[r].second;
        }
    }
    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}