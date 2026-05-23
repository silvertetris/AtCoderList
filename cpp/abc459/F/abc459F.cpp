#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
i를 고르고
a_i를 1 줄이고 a_i+1을 1 늘림
이건 i가 n-1이하

오름차순이 되는 최소 연산 횟수
dp문제 같음
ll까지 감
일단 둘 사이에서 연산을 실행하면 둘의 차이는 2씩 줆
5 3 1 이면
연산하면
4 4 가 됨
그니까 둘 차이가 홀수면 딱 떨어지고 짝수면 더 해야함
근데 뒤가 늘어났을때, 그 뒤에 연산또한 해야하기 때문에 힘들 수 있음
앞에서 부터 하는게 최적일까??
근데 앞에서 부터하다가 앞이 줄면, 그 앞또한 줄게 될 수 있음
4 6 3 5

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

    }

}