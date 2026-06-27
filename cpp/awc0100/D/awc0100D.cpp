#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<ll> prefix(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    prefix[0] = a[0];
    vector<ll> suffix(n);
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }
    suffix[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] + a[i];
    }
    ll ans = LLONG_MAX;
    for(int i=1; i<n; i++) {
        ans = min(ans, abs(suffix[i]-prefix[i-1]));
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}