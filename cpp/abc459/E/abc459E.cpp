#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
N정점 트리
1번이 루트
i의 부모 정점은 p_i임
i정점은 c_i 사탕 있음 사탕은 서로 개수가 다름
i개의 서브 노드로 부터 d_i사탕을 가져와라

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> p(n);
    vector<int> c(n);
    vector<int> d(n);
    for(int i=1; i<n; i++) {
        cin>>p[i];
    }
    for(int i=0; i<n; i++) {
        cin>>c[i];
    }
    for(int i=0; i<n; i++) {
        cin>>d[i];
    }

}