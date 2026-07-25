#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n;
ll MOD = 998244353;
vector<ll> a;
ll euclid(ll a, ll b) {
    ll r1 = a, r2 = b, s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    ll q, r, s, t;
    ll result;

    while (true) {
        q = r1 / r2;
        r = r1 - (q * r2);
        s = s1 - (q * s2);
        t = t1 - (q * t2);

        if (r == 0) {
            result = s2;
            break;
        }

        r1 = r2;
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }

    while (result <= 0) {
        result += b;
    }

    return result;
}
void solve() {
    cin>>n;
    a.assign(n+1, 0);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    vector<ll> prefix(n+1, 0);
    vector<ll> pprefix(n+1, 0);
    for(int i=1; i<=n; i++) {
        prefix[i]= (prefix[i-1]+a[i])%MOD;
    }
    for(int i=1; i<=n; i++) {
        pprefix[i] = (pprefix[i-1] + prefix[i]) %MOD;
    }
    ll ans = 0;
    for(int i=1; i<=n; i++) {//그 길이의 합
        ll temp = pprefix[n] - pprefix[i-1] - pprefix[n-i];
        if(temp<0) {
            temp+=MOD;
        }
        ans += (temp*euclid(i, MOD))%MOD;
        ans%=MOD;
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}