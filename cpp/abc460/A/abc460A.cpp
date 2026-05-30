#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin>>n>>m;

    int cnt=0;
    while(true) {
        int result = n%m;
        if(result ==0) {
            cnt++;
            break;
        }
        m = result;
        cnt++;
    }
    cout<<cnt<<"\n";

}