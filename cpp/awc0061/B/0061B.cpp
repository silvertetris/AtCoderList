#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<ll> s(n+1);
    vector<ll> c(n+1);

    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    for(int i=1; i<n; i++) {
        cin>>c[i];
    }
    vector<ll> dp(n+1);
    dp[0] = s[0];
    ll ans =dp[0];
    for(int i=1; i<n; i++) {
        dp[i] = dp[i-1] + s[i] - c[i];
        ans = max(dp[i], ans);
        
    }
    cout<<ans<<"\n";
}