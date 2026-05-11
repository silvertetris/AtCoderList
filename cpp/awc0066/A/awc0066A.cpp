#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin>>n>>q;
    vector<ll> a(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<q; i++) {
        int b;
        cin>>b;
        if(b==n) {
            a[b]=0;
            continue;
        }
        a[b+1]+=a[b];
        a[b]=0;
    }
    for(int i=1; i<=n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}