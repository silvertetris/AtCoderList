#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;

    /*
    k번 동안 연산 가능
    a_i에다가 1based idx만큼 더함 +i
    연산 다하고 최소값을 최대로 만들어 줘야함
    최소를 최대 -> 이분탐색 -> 최종적으로 찾아야할건 최소값 찾기
    근데 구간 -> 세그트리 -> 근데 18제곱 연산은 시간삑남
    우선 순위 큐 -> 만약 값이 졸라크고 1씩 증가한다면 최악의 경우 10^18 언저리 연산 할수도 있음 시간삑
    종합적으로 최소값 찾기
    일단 한번 다 탐색 -> 2*10^5 이거고 거기서 일단 최소값을 특정적으로 잡고, 그거 이상으로 일일히 다 탐색하면서 총 연산횟수를 구함
    거기서 temp가 k보다 작으면... -> 최소값이 큰거니까 최대를 낮추고, temp>k면 최소값을 높임 -> 최소값 ->mid
    upper bound해야함, 최소값이 그거보다 낮으면 안됨 높은것에대해서 연산횟수 맞춰야함
    */
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll l = 0;
    ll r = 2e18 + 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll op = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] < mid)
            {
                ll temp = mid - a[i];
                if(temp%i==0) {
                    op+=temp/i;
                }else {
                    op+=temp/i+1;
                }
            }
            if(op>k+100) {
                break;
            }
        }
        if (op <= k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l-1 << "\n";
}