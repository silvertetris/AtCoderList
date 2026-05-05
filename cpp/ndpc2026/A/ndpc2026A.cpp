#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<vector<ll>> dp(n + 1, vector<ll>(4, 0));
    dp[0][0] = 1;

    /*
    0. 빈칸 , 세로칸
    1. 위칸채워짐, ㄴ자
    2. 아래칸 채워짐 ㄱ자
    3. 다 채워짐 ,가로칸

    */
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][3];
        dp[i][1] = dp[i - 1][0] + dp[i - 1][2];
        dp[i][2] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][3] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2];
    }
    cout<<dp[n][0]<<"\n";
    // dp[1] = 1;
    /*
    1. 그냥 1자 하나 -> 1칸 차지
    2. 1자를 눕힌거 하나 -> 2칸 차지
    3. 3칸을 ㄱ 자로 대체
    */
}