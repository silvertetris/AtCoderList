#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, m;//개수, 골라야하는 수, 서로 다른 색

    cin>>n>>k>>m;

    vector<int> c(n+1);
    vector<int> v(n+1);
    priority_queue<pair<int, int>> cv;

    for(int i=0; i<n; i++) {
        int u, v;
        cin>>u>>v;
        cv.push({v, u});
    }
    ll res = 0;
    vector<int> temp;
    vector<bool> visited (n+1, false);
    int cnt = 0;
    int diff = 0;
    int ind=0;
    for(int i=0; i<n; i++) {
        if(cnt>=k||diff>=m) {
            break;
        }   
        else {
            if(visited[cv.top().second]) {
                temp.push_back(cv.top().first);
                cv.pop();
                continue;
            } else {
                cnt++;
                diff++;
                visited[cv.top().second] = true;
                res+=cv.top().first;
                cv.pop();
            }
        }
    }
    while(cv.size()!=0) {
        temp.push_back(cv.top().first);
        cv.pop();
    }
    int idx = 0;
    sort(temp.begin(), temp.end(), greater<int>());
    while(cnt<k) {
        if(idx>=temp.size()) break;
        res+=temp[idx];
        idx++;
        cnt++;
    }
    cout<<res<<"\n";
}