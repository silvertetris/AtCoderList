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
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<a[x]<<"\n";
}