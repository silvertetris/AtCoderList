#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n;
vector<int> a;
ll ans = 0;
void dfs(int l, int r, int x) {
    if(l<0 && r>=n) {
        return;
    }
    if(l<0) {
        ans+=abs(x- a[r]);
        dfs(l, r+1, a[r]);
        return;
    }

    if(r>=n) {
        ans+=abs(x-a[l]);
        dfs(l-1, r, a[l]);
        return;
    }
    if(abs(x-a[l]) <= abs(x-a[r])) {
        ans+=abs(x-a[l]);
        dfs(l-1, r, a[l]);
        
    } else {
        ans+=abs(x-a[r]);
        dfs(l, r+1, a[r]);
    }
}
void solve() {
    cin>>n;
    a.assign(n, 0);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int temp = 0;
    for(int i=0; i<n; i++) {
        if(a[i]<0) {
            temp = i;
        }
    }
    dfs(temp, temp+1, 0);
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}