#include <bits/stdc++.h>

using namespace std;
#define ll long long
/*
i번째 작품은 H_i점
하나 선택, 오름차순으로 정렬됨

서로 인접한놈 차가 D보다 같거나 작아야함
최대한 많은 작품 선택 수*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    vector<int> h (n);
    for(int i=0; i<n; i++) {
        cin>>h[i];
    }
    vector<int> dp(n+1, 1);
    
}