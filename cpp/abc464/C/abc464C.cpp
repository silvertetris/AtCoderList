#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> birds(n);
    vector<int> cnt(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        int a, d, b;
        cin >> a >> d >> b;
        birds[i] = {d, {a, b}};
    }
    sort(birds.begin(), birds.end());

    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(birds[i].second.second);
        cnt[birds[i].second.second]++;
    }

    int idx = n - 1;
    int days = m;
    vector<int> res;

    while (days >= 1)
    {
        while (idx >= 0 && birds[idx].first > days)
        {

            cnt[birds[idx].second.second]--;
            if (cnt[birds[idx].second.second] == 0) {
                s.erase(birds[idx].second.second);
            }
            cnt[birds[idx].second.first]++;
            s.insert(birds[idx].second.first);

            idx--;
        }
        res.push_back(s.size());
        days--;
    }
    for(int i=m-1; i>=0; i--) {
        cout<<res[i]<<"\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}