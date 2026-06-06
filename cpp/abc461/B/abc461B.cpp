#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++) {
        cin>>b[i];
    }
    //그니까 1
    for(int i=1; i<=n; i++) {
        if( b[a[i]]!= i) {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}