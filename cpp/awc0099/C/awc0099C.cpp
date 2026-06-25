#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, q;
    cin>>n>>q;
    vector<int> parents(n+1);
    for(int i=0; i<=n; i++) {
        parents[i] = i;
    }
    for(int i=2; i<=n; i++) {
        int temp;
        cin>>temp;
        parents[i] = temp;
    }
    for(int i=0; i<q; i++) {
        int x, d;
        cin>>x>>d;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}