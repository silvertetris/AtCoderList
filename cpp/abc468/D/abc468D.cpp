#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
하나만 바꿨을때 펠림드롬 되면 good string
그냥 펠린드롬도 good string


1, 2, 3 은 무조건 가능
중앙에서부터 밖으로?
-> 모든 지점을 거점으로 하나씩 퍼지기 10^4^2 *2 => 2초

홀짝 나눔
*/
void solve() {
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.size(); i++) { 
        int l = i;
        int r = i;
        int op = 0;
        while(l>=0 && r<s.size()) {
            if(s[l]!=s[r]) {
                op ++;
            }
            if(op>1) {
                break;
            }
            ans++;
            l--; r++;
        }
        l=i;
        r=i+1;
        op = 0;
        while(l>=0 && r<s.size()) {
            if(s[l]!=s[r]) {
                op++;
            }
            if(op>1) break;
            ans++;
            l--; r++;
        }
    }

    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}