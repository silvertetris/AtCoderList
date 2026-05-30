#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    /*
    N피스의 샤리, M핏의 네타

각 무게 있음

1 샤리하고 1 네타랑 합쳐야 스시임

네타의 무게는 최대 2*샤리 무게임
neta <=2*shari 임
이거 만족하는 최대 스시 개수
    */
    vector<int> shari(n + 1, 0);//shari
    vector<int> neta(m + 1, 1e9+5);//neta
    for (int i = 1; i <= n; i++)
    {
        cin >> shari[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> neta[i];
    }
    sort(shari.begin(), shari.end());
    sort(neta.begin(), neta.end(), greater<int>());

    int r = n;
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = r; j >= 1; j--)
        {
            if(neta[i]<=2*shari[j]) {
                r--;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<"\n";
}