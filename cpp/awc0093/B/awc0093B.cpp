#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int dfs(int node, vector<bool> &a, vector<int> &graph) {
    if(a[graph[node]]) {
        return 0;
    }
    a[graph[node]] = true;
    return dfs(graph[node], a, graph)+1;
}
void solve() {
    int n;
    cin>>n;
    vector<bool> a(n+1, false);
    a[1] = true;
    vector<int> graph(n+1);
    for(int i=1; i<=n; i++) {
        cin>>graph[i];
    }
    cout<<dfs(1, a, graph)+1<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    
}