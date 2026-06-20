#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    ld x, y;
    cin>>x>>y;
    if(x/16 == y/9) {
        cout<<"Yes\n";
    }
    else {
        cout<<"No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}