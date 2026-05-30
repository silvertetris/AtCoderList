#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
H행 하고 W열
각 셀 좌표
.이면 하얀색, #면 검정색

10^100번 가능


검정에 인접한 흰색들은 검정됨
검정은 그냥 하얀색 됨

이 연산은 동시에

1. 일단 짝수니까 검정인 애들은 무조건 하양됨
2. 연산 후 인접인 애들에 의해서 퍼지고 퍼져서 검정이 끝에 도달할 수 있음

문제 -> 검정색끼리의 위치에 따라 전파 범위가 달라지는데 이걸 어떻게 일일히 구하지?

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w;
    cin>>h>>w;
    vector<string> board(h);
    for(int i=0; i<h; i++) {
        cin>>board[i];
    }

}