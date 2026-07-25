#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n;
vector<int> p;//얘보다 커야함
vector<int> q;//얘보다 작아야함
bool check() {
    bool init = false;
    for(int i=0; i<n; i++) {
        if(p[i]<q[i]) {
            init = true;
            break;
        }else if(p[i]==q[i]) {
            continue;
        } else {
            break;
        }
    }
    return init;
}
void solve() {
    cin>>n;
    p.assign(n, 0);
    q.assign(n, 0);
    int res = 0;
    for(int i=0; i<n; i++) {
        cin>>p[i];
    }
    for(int i=0; i<n; i++) {
        cin>>q[i];
    }
    while(true) {
        if(!check())break;
        else {
            res++;
            next_permutation(p.begin(), p.end());
        }
    }
    cout<<max(0, res-1)<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}