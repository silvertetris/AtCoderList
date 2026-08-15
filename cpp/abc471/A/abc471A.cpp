#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int a, b;
    cin>>a>>b;
    if(a+b==9) {
        cout<<"Nine\n";
    } else if(a-b==9) {
        cout<<"Nine\n";

    } else if(a*b==9) {
        cout<<"Nine\n";
    } else if(a/b==9&&a%b==0) {
        cout<<"Nine\n";
    }else {
        cout<<"Nein\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}