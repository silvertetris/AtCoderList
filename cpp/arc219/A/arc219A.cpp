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
    bool zeroCnt = false;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    if (pow(2ll, m) == (ll)n)
    {
        cout << "No\n";
        return 0;
    }
    sort(s.begin(), s.end());
    cout<<"Yes\n";
    string r ="";//결과
    vector<bool> u(n, false);//해당 자리가 만족 했는가?
    for(auto  i=0; i<m; i++) {
        ll zero = 0;
        ll one = 0;
        for(auto  j=0; j<n; j++) {
            if(!u[j]) {
                if(s[j][i] =='0') {
                    zero++;
                }else {
                    one++;
                }
            }
        }
        if(zero<one) r.push_back('1');
        else r.push_back('0');
        for(auto j=0; j<n; j++) {
            if(s[j][i] == r[i]) {//입력 지점 == 결과랑 같으면-> 제외 (이건 이미 최소 한군대는 만족한거임, 다 제외시키고 안된곳만 보면 됨(false인 지점))
                u[j]=true;
            }
        }
    }
    cout<<r<<"\n";

}