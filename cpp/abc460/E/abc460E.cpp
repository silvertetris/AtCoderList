#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

ll gcd(ll x, ll y) {
    ll temp;
    if(x<y) {
        temp = x;
        x=y;
        y=temp;
    }
    ll rest;
    while(y!=0) {
        rest = x%y;
        x=y;
        y=rest;
    }
    return x;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /*
    n보다 크지 않은 두 페어의 개수
    concat(x, y) = (x+y)
    %MOD
    
    */
    int t;
    cin>>t;
    while(t--) {
        ll n;
        ll m;
        cin>>n>>m;
        ll rr = gcd(m, n);
        cout<<rr<<"\n";
    }
}