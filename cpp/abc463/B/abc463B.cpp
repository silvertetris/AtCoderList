#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    char x;
    cin>>n>>x;
    vector<string> s(n);
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    bool flag = false;
    for(int i=0; i<n; i++) {
        if(s[i][x-'A']=='o') {
            flag = true;
            break;
        }
    }
    if(flag) {
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