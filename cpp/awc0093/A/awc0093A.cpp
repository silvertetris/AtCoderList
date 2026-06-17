#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> w(n);
    for(int i=0; i<n; i++) {
        cin>>w[i];
    }

    for(int i=0; i<m; i++) {
        int k;
        cin>>k;
        ll res =0ll;
        for(int j=0; j<k; j++) {
            int temp;
            cin>>temp;
            res+=w[temp-1];
        }
        cout<<res<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    
}