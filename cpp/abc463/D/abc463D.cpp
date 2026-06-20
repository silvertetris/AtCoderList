#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
한줄에 N 옷 있음

L_i 부터 R_i 감쌈

주어진거에서 k개 고르고 안덮인 애들 최소 거리인 애들을 최대화 시키는 걸 골라야함
골랐을때 그 최소놈의 거리

차분배열 그리디? -> 세그트리 -> 뭘 집어넣고 안집어넣을지 어떻게 알지
최소 거리를 초점으로 이분탐색? -> 거리를 확정해놓고 뭘 넣을지 말지를 정한다? 근데 어차피 k개는 무조건 골라야함
차분배열 + 이분탐색 -> 일단 다 집어넣고, 어차피 cnt>=k 조건까지만 하나씩 차분배열이 필요없음
어차피 만족해야하는건 안덮힌다 친 구간일때, 좌측의 r 에서 우측의 l 까지의 하나의 거리만 생김 다른건 고려 ㄴ
좌에서 우로 덮음 -> 우측에 있는애들이 뒤에 l 보다 작으면 더 공간이 생김 -> 그니까 제일 작은 r부터
-> 이게 제일 공간확보를 많이함-> 0부터 처음 l 까지 도 고려해야함 그니까 l 거리를 cloth[0].second

*/
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> cloth(n); // r -> l
    for (int i = 0; i < n; i++)
    {
        cin >> cloth[i].second >> cloth[i].first;
    }
    sort(cloth.begin(), cloth.end());
    int l = 0;
    int r = 1e9+10000;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        bool flag = false;
        int cnt = 1;
        int temp = cloth[0].first; // 빈공간 좌측의 r
        for (int i = 1; i < n; i++)
        {

            if (cloth[i].second - temp >= mid)
            { // 그니까 뭘 해야하냐 -> 좌측 r (temp) 에서 이제 우측 l (cloth[i].second) 여기가 그니까 이거 둘 사이 거리가 기준 거리 (mid) 보다 크면? 이 옷을 놔도 되는거지 그니까 cnt++ -> cloth[i].2 - cloth[prev].1 >= ans
                cnt++;
                temp = cloth[i].first;
            }
        }
        if(cnt>=k) {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    if(l-1<=0) {
        cout<<"-1\n";
    } else {
        cout<<l-1<<"\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}