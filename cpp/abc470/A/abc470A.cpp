#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(i%3==0) {
            cout<<"Fizz\n";
        }else {
            cout<<i<<"\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}