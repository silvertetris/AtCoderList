#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int MOD = 998244353;
    string s;
    cin >> s;
    int cnt = 1;
    vector<ll> dp(27, 1);
    /*
    #1. states/ subproblems
    dp[i] = i로 끝나는 문자 중에 부분 수열 개수
    */
    dp[s[0] - 'a'] = 1;
    bool flag = false;
    for (int i = 1; i < s.size(); i++)
    {
        int num = s[i] - 'a';
        if (s[i] != s[i - 1])
        {
            if (flag)
            {
                dp[s[i - 1] - 'a'] += 2 * (cnt - 1);
                flag = false;
                cnt = 1;
            }
            dp[num] = 2 * dp[s[i - 1] - 'a'] + 1;
        }
        else
        {
            ++cnt;
            flag = true;
            if (i == s.size() - 1)
            {
                dp[num] += 2 * (cnt - 1);
            }
        }
        dp[num] %= MOD;
    }
    int ans = s[s.size() - 1] - 'a';
    cout << dp[ans] << "\n";
}