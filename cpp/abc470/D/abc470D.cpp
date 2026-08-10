#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, q;
    cin>>n>>q;
    vector<int> p(n+1, 0);
    vector<int> pprime(n+1, 0);
    for(int i = 1; i<=n; i++) {
        cin>>p[i];
        pprime[p[i]] = i;
    }
    bool flag = false;
    for(int i=0; i<q; i++) {
        int op;
        cin>>op;
        if(op==1) {
            int u, v;
            cin>>u>>v;
            if(!flag) {
                swap(p[u], p[v]);
                swap(pprime[p[u]], pprime[p[v]]);
            }else {
                swap(pprime[u], pprime[v]);
                swap(p[pprime[u]], p[pprime[v]]);
            }
        }
        else {
            flag = !flag;
        }
    }
    if(flag) {
        for(int i=1; i<=n; i++) {
            cout<<pprime[i]<<" ";
        }
    }else {
        for(int i=1; i<=n; i++) {
            cout<<p[i]<<" ";
        }
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}