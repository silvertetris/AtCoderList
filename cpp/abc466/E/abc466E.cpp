#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n, k;
int INF = INT32_MIN;
void solve() {
    cin>>n>>k;
    vector<int> a(n+1, 0);
    vector<int> b(n+1, 0);
    for(int i=1; i<=n; i++) {
        cin>>a[i]>>b[i];
    }
    /*
    #1. states/ subproblems
    dp[i][j] = i인덱스가 j번째에 뒤집혔을 때 최대 점수
    dp[i][j][0] = i번째가 뒤집히지 않았을 때 최대 점수
    dp[i][j][1] = i번째가 뒤집혔을 때 최대 점수
    그니까 i가 뒤집히려면, j 중에서 이전전이된걸 가져옴 -> 한번도 뒤집혀지지 건들지 않았으면 INF -> A, B 상태체크
    j-1 전이를 가져오는 경우??
    -> 
    i-1은 계속 가져옴
    0이면 0
    1이면 1
    0이였다 1되는 경우 , 1이였다 0되는 경우X

    */
    vector<vector<vector<ll>>> dp(n+1, vector<vector<ll>>(k+1, vector<ll>(2, INF)));
    for(int i=0; i<=k; i++) {
        dp[0][i][0] = 0;
        dp[0][i][1] = 0;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; i<=k; i++) {
            
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}