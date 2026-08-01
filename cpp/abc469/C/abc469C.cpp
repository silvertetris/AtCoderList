#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    vector<int> cnt(n+1, 0);//x 인덱스
    int temp = 0;
    for(int i=1; i<=n; i++) {
        if(s[i-1] == 'x') {
            temp++;
            cnt[temp] = i;
        }
    }
    for(int i=temp+1; i<=n; i++) {
        cnt[i] = n;
    }
    for(int i=1; i<=n; i++) {
        cout<<cnt[i]<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}