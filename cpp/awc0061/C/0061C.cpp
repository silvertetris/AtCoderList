#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin>>n>>k;
    vector<ll> fruits(n);
    for(int i=0; i<n; i++) {
        cin>>fruits[i];
    }

    vector<ll> dp(n+1);
    dp[0] = 0;
    dp[1] = fruits[0];
    for(int i=1; i<=n; i++) {
        dp[i] = max(dp[i-1], fruits[i-1]);
        /*
        1. 수확했을때
        2. 수확을 안했을때
        3. 수확을 안하고 해당 열매부터 수확할때
        */
        if(i-k-1>=0) {
            dp[i] = max(dp[i], dp[i-k-1] + fruits[i-1]);
        }
    }
    cout<<dp[n]<<"\n";
}