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

    vector<vector<int>> a(n+1);
    for(int i=1; i<=n; i++) {
        int l;
        cin>>l;
        for(int j=0; j<l; j++) {
            int input;
            cin>>input;
            a[i].push_back(input);
        }
    }
    int x, y;
    cin>>x>>y;
    cout<<a[x][y-1]<<"\n";
}