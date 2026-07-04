#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int x,y ,l,r,a,b;
    cin>>x>>y>>l>>r>>a>>b;
    int diff = b-a;
    int temp = min(b, r) - max(l, a);
    temp = max(0, temp);
    diff-=temp;
    int res = diff*y;
    res+= temp*x;
    cout<<res<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}