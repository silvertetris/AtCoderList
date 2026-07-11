#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0; i<n; i++) {
        cin>>x[i];
        if(x[i]>=0) {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}