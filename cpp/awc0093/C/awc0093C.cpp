#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> diff(n + 2, 0);

    for (int j = 0; j < m; j++) {
        int l, r;
        ll d;
        cin >> l >> r >> d;
        diff[l] += d;
        diff[r + 1] -= d;
    }

    ll cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += diff[i];
        a[i] += cur;
        cout << a[i] << " ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}