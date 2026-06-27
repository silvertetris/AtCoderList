#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    ll ans = 0;
    for(int i=0; i<n; i++) {
        int u, v;
        cin>>u>>v;
        ans+=(ll) u * (ll) v;
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}