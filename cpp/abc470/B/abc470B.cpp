#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> c(101, 0);
    for(int i=0; i<n; i++) {
        int temp ;
        cin>>temp;
        c[temp]++;
    }
    int ans = 0;
    for(int i=1; i<=100; i++) {
        ans = max(ans, c[i]);
    }
    cout<<n-ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}