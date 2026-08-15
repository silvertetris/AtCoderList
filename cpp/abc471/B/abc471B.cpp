#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    map<string, int> mp;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++) {
            s[j] = tolower(s[j]);
        }
        mp[s]++;
    }
    int max = 0;
    for(const auto& [key, val] : mp) {
        if(val > max) {
            max = val;
        }
    }
    cout<<max<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}