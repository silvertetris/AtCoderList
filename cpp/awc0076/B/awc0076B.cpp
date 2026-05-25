#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    /*
    b, greater
    a, greater,
    idx, sort
    */
    vector<tuple<int, int, int>> particip(n);
    for(int i=0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        particip[i] = {b, a, i};
    }
    sort(particip.begin(), particip.end(), [](const auto&x, const auto&y) {
        auto& [b1, a1, i1] = x;
        auto& [b2, a2, i2] = y;
        if(b1!=b2) {
            return b1>b2;
        }
        if(a1!=a2) {
            return a1>a2;
        }
        if(i1!=i2) {
            return i1<i2;
        }
    });
    for(int i=0; i<n; i++) {
        auto&[b, a, idx] = particip[i];
        cout<<idx+1<<"\n";
    }

}