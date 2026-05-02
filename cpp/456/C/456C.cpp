#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    int size = s.size();
    vector<ll> dp (size+1);
    dp[0] = 1;
    //연속된 인덱스 도출
    int cnt = 0;
    for(int i=1; i<size; i++) {
        dp[i] = dp[i-1]+1;
        if(s[i]!=s[i-1]) {
            ++cnt;
            dp[i]+=cnt;
        }
        if(s[i]==s[i-1]) {
            cnt=0;
        }
        dp[i] %=998244353;
    }
    cout<<dp[size-1]%998244353;
}