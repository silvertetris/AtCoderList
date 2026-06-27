#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> mount;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mount[a[i]]++;
    }

    map<int, int> prefix;
    int cnt = 0;
    for(auto i = mount.rbegin(); i !=mount.rend(); i++) {
        prefix[i->first] = cnt;
        cnt += i->second;
    }

    for(int i=0; i<n; i++) {
        cout<<prefix[a[i]]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
}