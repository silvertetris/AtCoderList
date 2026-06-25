#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    ll w;
    cin>>n>>w;
    int res = 0;
    for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        w-=temp;
        if(w>=0) {
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