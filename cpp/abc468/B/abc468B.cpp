#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int m , d;
    cin>>m >>d;
    string s;
    cin>>s;
    vector<bool> visited(m, false);
    for(int i=0; i<m; i++) {
        int cur = s[i];
        if(cur=='G') {
            int start = max(0, i-d);
            int end = min(m-1, i+d);
            for(int j=start; j<=end; j++) {
                visited[j] = true;
            }
        }
    }
    int res = 0;
    for(int i=0; i<m; i++) {
        if(!visited[i]) res++;
    }
    cout<<res<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}