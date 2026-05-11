#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, l, k, y;
    cin >> n >> l >> k >> y; // 핸드폰 수, 최하 배터리 퍼센트, 선택 폰 개수, 시간
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] - y > l)
        {
            cnt++;
        } else {
            if(a[i]<=l) {
                break;
            } else {
                if(k==0) {
                    break;
                }else {
                    k--;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<"\n";
}