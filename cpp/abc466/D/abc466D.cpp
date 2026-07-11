#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int n, m;
void solve() {
    cin>>n>>m;
    /*
    걍 거꾸로? 하면 되는거 아님?
    */
    vector<int> r(m);
    vector<int> c(m);
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        r[i] = u;
        c[i] = v;
    }
    vector<bool> rvisited(n+1, false);
    vector<bool> cvisited(n+1, false);

    int ans = 0;
    for(int i=m-1; i>=0; i--) {
        if(!rvisited[r[i]] && !cvisited[c[i]]) {
            ans++;
        }
        rvisited[r[i]] = true;
        cvisited[c[i]] = true;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}