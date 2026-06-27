#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    int res = 0;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        int u, v;
        cin>>u>>v;
        int temp = u+v;
        if(res<temp) {
            ans = i;
            res = temp;
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}