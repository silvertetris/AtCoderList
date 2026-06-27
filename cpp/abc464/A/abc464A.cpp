#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='E') {
            a++;
        }else {
            b++;
        }
    }
    if(a>=b) {
        cout<<"East\n";
    }else {
        cout<<"West\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}