#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp = "x";
    for(int i=0; i<n; i++) {
        temp+=s[i];
    }
    temp+="x";
    int ans = 0;
    for(int i=1; i<=n; i++) {
        if(temp[i]=='x' && temp[i-1]=='x' && temp[i+1]=='x') {
            ans ++;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}