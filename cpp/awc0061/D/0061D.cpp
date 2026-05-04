#include <bits/stdc++.h>

using namespace std;
#define ll long long

/*
정거장 1부터 N까지
M버스 루트가 있음
i번쨰 버스루트는 A_i …. K_I까지 지나고 멈춤

최소로 탈 수 있는 루트*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, s, t; //s start , t destination
    cin>>n>>m>>s>>t;
    vector<vector<int>> route(m);

    for(int i=0; i<m; i++) {
        int k;
        cin>>k;
        for(int j=0; j<k; j++) {
            int temp;
            cin>>temp;
            route[i].push_back(temp);
        }
    }

}