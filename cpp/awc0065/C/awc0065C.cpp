#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> dp(n+1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    dp[0] = a[0];
    for(int i=1; i<n; i++) {
        if(i==1) {
            dp[1] = max(dp[0], a[1]);
            continue;
        }
        dp[i] = max(dp[i-1], dp[i-2]+a[i]);
    }
    cout<<dp[n-1]<<"\n";
}