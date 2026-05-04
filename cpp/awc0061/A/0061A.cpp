#include <bits/stdc++.h>

using namespace std;
#define ll long long
/*
M노래들 N멤버들
N멤버들은 노래 한개 이상 선택 같은거 1번만 가능
i번째 멤버는 k_i 노래들을 선택, 그리고 고른 노래들의 숫자는 C_i, 1… K_i까지임
N멤버중에 1부터 M개의 노래중 몇개를 선택했는지
숫자는 다 오름차순임
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    vector<int> cnt(m+1, 0);
    //vector<vector<int>> songs(n);
    for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        for(int j=0; j<temp; j++) {
            int input;
            cin>>input;
            cnt[input]++;
            //songs[i].push_back(input);
        }
    }
    int res =0;
    for(int i=0; i<m+1; i++) {
        if(cnt[i] == n) {
            res++;
        }
    }
    cout<<res<<"\n";
}