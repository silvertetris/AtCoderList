#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
vector<vector<int>> graph;
vector<int> in, out;
vector<ll> diff;
int timer = 0;

void ett(int cur, int prev) {
    in[cur] = ++timer;
    for(int nei: graph[cur]) {
        if(nei!=prev) {
            ett(nei, cur);
        }
    }
    out[cur] = timer;
}
void solve() {
    int n, q;
    cin>>n>>q;
    in.resize(n+1);
    out.resize(n+1);
    graph.resize(n+1);
    diff.resize(n+2, 0);


    for(int i=2; i<=n; i++) {
        int u;
        cin>>u;
        graph[u].push_back(i);
        graph[i].push_back(u);
    }
    ett(1, 0);
    for(int i=0; i<q; i++) {
        int x, d;
        cin>>x>>d;
        diff[in[x]] +=d;
        diff[out[x]+1]-=d;
    }
    
    vector<ll> prefix(n+1, 0);
    ll temp = 0;
    for(int i=1; i<=n; i++) {
        temp += diff[i];
        prefix[i] = temp;
    }

    for(int i=1; i<=n; i++) {
        cout<<prefix[in[i]]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}