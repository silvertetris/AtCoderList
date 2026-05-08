#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n >>m;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> c(n);
    vector<int> p(m);
    vector<int> q(m);
    vector<int> k(m);

    for(int i=0; i<n; i++) {
        cin>>x[i]>>y[i]>>c[i];
    }

    for(int i=0; i<m; i++) {
        cin>>p[i]>>q[i]>>k[i];
    }
    
}