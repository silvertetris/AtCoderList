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
    if (pow(2, m) == n)
    {
        cout << "No\n";
        return 0;
    }
    sort(s.begin(), s.end());
    string ans="";
    for(int i=0; i<m; i++) {
        ans+='0';
    }
    
    for(int i=0; i<pow(2, m); i++) {
        bool check = true;
        for(int j=0; j<n; j++) {
            bool flag = false;
            for(int k=0; k<m; k++) {
                if(ans[k]==s[j][k]) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                check = false;
                break;
            }
        }
        if(check) {
            break;
        }
        for(int j=m-1; j>=0; j--) {
            if(ans[j]=='0') {
                ans[j]='1';
                break;
            } else {
                ans[j]='0';
            }
        }
    }
    cout<<"Yes\n"<<ans<<"\n";
}