#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n;
vector<char> s;
vector<int> x, y;
/*해당 날의 날씨를 바꾸면 너의 행복도는
x_i만큼 내려감

다 내린후에
i가 비내리고, 그 이후 i+1이 써니하면 y_i만큼 증가

*/
void solve() {
    cin>>n;
    x.resize(n+2, 0);
    y.resize(n+2, 0);
    s.resize(n+1);
    for(int i=1; i<=n; i++) {
        cin>>s[i];
    }
    for(int i=1; i<=n; i++) {
        cin>>x[i];
    }
    for(int i=1; i<n; i++) {
        cin>>y[i];
    }
    /*
    #1. states/subproblems
    dp[i][j] = i인덱스에서 날씨가 j일 때 최대 행복
    */
    vector<vector<ll>> dp (n+1, vector<ll>(2, LLONG_MIN-INT16_MAX));//S, R
    ll res = 0;
    if(s[1]=='S') {
        dp[1][0] = 0;
        dp[1][1] = -x[1];
    } else {
        dp[1][0] = -x[1];
        dp[1][1] = 0;
    }
    
    for(int i=2; i<=n; i++) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + y[i-1]);
        if(s[i]!='S') {
            dp[i][0] -=x[i];
        }
        dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
        if(s[i]=='S') {
            dp[i][1] -=x[i];
        }
    }
    cout<<max(dp[n][0], dp[n][1])<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}