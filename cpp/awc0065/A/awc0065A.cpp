#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    ll res =0;
    for(int i=0; i<n; i++) {
        if((i+1)%k==0) {
            res+=1;
        }
        res+=a[i];
    }
    if(n%k==0) {
        res--;
    }
    cout<<res<<"\n";
}