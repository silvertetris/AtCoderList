#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n, m, y;//y 워프 비용
    /*
    워프는 어디든 가능함
    그니까 워프는 어디든 가능함 -> 워프가 어디든 가능함? 어디로든 문이니까 비용은 인덱스 x 에 따라만 달라짐 그니까 음. 일단 ll 이여야함
    그리고 워프는 언제든 쓸수있음 -> 그 인덱스에서 워프 타는 비용은 무조건 x[i]가 추가되고, 워프 탄곳에서 다시 i로 가려면 x[i]비용이 추가됨.이 아니라 x[i]+y 까지임
    그니까 워프로 간다 = x[i]
    그 워프에서 도착지로 간다 = x[j]+y
    워프 노드를 따로 만든다.
    */
    cin>>n>>m>>y;
    vector<vector<pair<int, ll>>> graph(n+2);//node, cost
    for(int i=0; i<m; i++) {
        int u, v, t;
        cin>>u>>v>>t;
        graph[u].push_back({v, t});
        graph[v].push_back({u, t});
    }
    vector<int> x(n+1, 0);// 각 인덱스 에서 인덱스 값들 + y 이건 나중에 계산? 다익스트라 할떄마다 계산하면 되는거 아님?
    for(int i=0; i<n; i++) {
        cin>>x[i+1];
        graph[i+1].push_back({n+1, x[i+1]});
        graph[n+1].push_back({i+1, x[i+1]+y});
    }

    vector<ll> dist(n+2, 3e9+1000);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;//dist, node
    dist[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()) {
        ll curdist = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if(curdist>dist[cur]) continue;
        for(auto& nei:graph[cur]) {
            int next = nei.first;
            ll cost = nei.second;
            if(dist[next]>dist[cur]+cost) {
                dist[next] = dist[cur]+cost;
                pq.push({dist[next], next});
            }
        }
    }
    for(int i=2; i<=n; i++) {
        cout<<dist[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve(); 
}