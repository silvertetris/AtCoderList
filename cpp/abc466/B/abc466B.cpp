#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> cnt(m+1, -1);
    for(int i=0; i<n; i++) {
        int u, v;
        cin>>u>>v;
        cnt[u] = max(cnt[u], v);
    }
    for(int i=1; i<=m; i++) {
        cout<<cnt[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}