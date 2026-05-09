#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    N칸들 수평, 넘버링
    M개의 천 넘버링 L_i부터, R_i까지 칸들을 커버함 1-based
    q질문 답
    2개의 천을 선택해서 가능한지
    s_q하고 T_q사이 칸들이 최소 한개의 천으로 덮여있는지 그리고 안덮여있는게 없어야함
    아 그니까 2개선택해서 딱 그구간만 다 덮여야한다 그 외는 덮이면 안된다
    일단 딱 그 인덱스 구간 찾아야함
    그리고, 딱 끝구간 인덱스인거 1개 찾아야함
    이분탐색?
    그니까, 뭐를 이분탐색으로 찾냐
    일단 시작 구간 끝구간 맞는애들 중에서, 그 시작구간에서 끝이 최대 면서 최소값보다 큰애들
    끝구간에서 시작이 최소면서 시작보단 큰애들
    
    */

    int n, m;//지점 인덱스 최대, 입력
    cin >> n >> m;
    vector<pair<int, int>> cloth(m);
    vector<int> lmax(n+1, -1);
    vector<int> rmin(n+1, n+2);
    /*
        for(int i=0; i<=n; i++) {
        lmax[i] = i;
        rmax[i] = i;
    }
    */

    int q;

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        cloth[i] = {l, r};
        lmax = max(lmax, r);
        rmin = min(rmin, l);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int s, t;
        cin>>s>>t;
        
    }
    
}