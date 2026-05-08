#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll x;
    cin>>n>>x;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int idx=-1;
    ll cnt = 0;
    for(int i=0; i<n; i++) {
        cnt+=a[i];
        if(cnt>=x) {
            idx = i+1;
            break;
        }
    }
    cout<<idx<<"\n";
}