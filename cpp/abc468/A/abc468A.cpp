#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int res = 0;
    for(int i=1; i<n-1; i++) {
        if(a[i]>a[i-1] && a[i]>a[i+1]) {
            res++;
        }
    }
    cout<<res<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}