#include <bits/stdc++.h>

#define ll long long
#define ld long double
using namespace std;

/*
그니까 뒤집은 결과가 132
고, 뒤집기 전의 순열의 개수를 구해야함
그니까 특정 뒤집기 전 순열에서
가장 최적으로 사전순으로 작게 뒤집었을때, 입력이 나와야함

일단 첫 숫자가 1이 아니면 절대 안됨

1 2 6 4 5 3

1 3 5 4 6 2
1 4 6 2 5 3
1 5 4 6 2 3
1 6 2 4 5 3
2 1 6 4 5 3
3 5 4 6 2 1
4 6 2 1 5 3
5 4 6 2 1 3
6 2 1 4 5 3
뒤집은 경우의 수를 구할때:
그 다음 제일 작은 숫자가 뒤집을 대상 맨 뒤에 있어야함

일단 1이라면 추가해야하는 수는 n-1만큼 싹다 뒤집기가 가능함
그 다음 작은 수는
무조건 그것보다 1작은 수보다 뒤에 있어야함
그니까 뒤에 있어야하는데, 그 인덱스 뒤에서 뒤집어야함
저기서 2는 2뒤에있어야하니까
n-2가 가능한거임
근데 일단 그 숫자가 어디에 있느냐에 따라 뒤집기가 가능함
그니까 해당 숫자 인덱스 뒤에가 존재해야함
3이면 뒤에 아무것도 없으니까 뒤집기를 못함
그다음에 4는 뒤에 5가 하나 있으니까 안됨
뒤집을때, 그 뒤에 작은 숫자가 하나라도 있으면 뒤집는 경우가 안됨


*/
int main()
{
    ios::sync_with_stdio(false);

    cin.tie(0);
    cout.tie(0);
    ll MOD = 998244353;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        vector<int> indices(n + 1);
        ll res = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            indices[p[i]] = i;
        }
        if (indices[1] != 1)
        {
            cout << 0 << "\n";
            continue;
        }
        if(n==1) {
            cout<<1<<"\n";
            continue;
        }
        int idx = 1;
        for (auto i = 1; i <= n; i++)
        {
            if (idx > indices[i])
            {
                break;
            }
            else
            {
                res += (ll)(n - indices[i])%MOD;
                res%=MOD;
                idx = indices[i];
            }
        }
        cout<<res<<"\n";
    }
}