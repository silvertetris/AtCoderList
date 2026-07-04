#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
ll x, y, k;
void solve()
{
    cin >> x >> y >> k;
    int cnt = 0;
    if(x==y) {
        cout<<"0\n";
        return;
    }

    while(true) {
        if(x/k==y) {
            cnt++;
            break;
        }
        if(x*k<y) {
            break;
        }
        else {
            x/=k;
        }
    }
    int cur = y/k;
    cur%=x;
    cnt+=cur;
    cout << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}