#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int q, v;
    cin>>q>>v;
    priority_queue<int> pq;
    while(q--) {
        int op, tq;
        cin>>op>>tq;
        if(op==1) {
            int wq;
            cin>>wq;
            pq.push(wq-tq);
        }else {
            if (pq.empty()) {
                cout << -1 << "\n";
            } else {
                int s = pq.top();
                pq.pop();
                cout << min(v, s + tq) << "\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}