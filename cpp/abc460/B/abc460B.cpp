#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        ll x1, y1, r1, x2, y2, r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        /*
        무조건 제곱 거리로
        1. 일반적인 거리 계산
        2. 한 원이 내부에 있을 경우 고려
        그니까 두 반지름 차이가, 원의 거리보다 작아야함

        */
        ll circleDist = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);r=
        
        ll radiusDist = (r1+r2)*(r1+r2);
        if((r1-r2)*(r1-r2)<=circleDist && circleDist<=radiusDist) {
            cout<<"Yes\n";
        }else {
            cout<<"No\n";
        }
    }
}