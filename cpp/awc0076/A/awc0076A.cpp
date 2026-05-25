#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, p, m;
    ll r;
    cin >> s >> p >> r >> m;

    // 2면 p랑 v_i랑 곱한게 빼짐
    /*
    초기는 s
    1이면 v_i더함

    */
    ll ans=s;
    for (int i = 0; i < m; i++)
    {
        int e, v;
        cin>>e>>v;
        if(e==1) {
            ans+=v;
        }else {
            ans-=(ll)p*(ll)v;
        }
    }
    cout<<abs(ans-r)<<"\n";
}