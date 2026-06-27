#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, l,  q;
    cin>>n>>l>>q;
    vector<string> s(n);//l길이

    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    for(int i=0; i<q; i++) {
        int m;
        cin>>m;
        vector<char> ans(l, '0');

        for(int j=0; j<m; j++) {
            int temp;
            cin>>temp;
            temp--;
            for(int k=0; k<l; k++) {
                if(s[temp][k]=='1') {
                    ans[k]='1';
                }
            }
        }
        for(int j=0; j<l; j++) {
            cout<<ans[j];
        }
        cout<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}