#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
N개의 물건을 삼 넘버링
w_i만큼 가격임
Q쿠폰 있음
j번째 쿠폰은 L_j 부터 R_j 까지 품목들을 다 할인해줌

구간 겹치면 축적 됨
s_i에 축적되면,  w_i-s_i임

0원 지출하는 아이템 출력 (w_i <=s_i)
segtree는 구간의 합 -> 구간의 합을 구할때, 그 구간 자체가 0이 되면 그 하위 구간애들도 다 0이니까 0으로 만듦 -> 역 연산인데 이게 가능할까??
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin>>n>>q;
    vector<ll> w(n+1);
    for(int i=1; i<=n; i++) {
        cin>>w[i];
    }
    vector<int> l(q);
    vector<int> r(q);
    vector<int> d(q);
    for(int i=0; i<q; i++) {
        cin>>l[i]>>r[i]>>d[i];
    }
    vector<ll> diff(n+2, 0);
    for(int i=0; i<q; i++) {
        diff[l[i]]+=d[i];
        diff[r[i]+1]-=d[i];
    }

    vector<ll> prefix(n+1, 0);
    for(int i=1; i<=n; i++) {
        prefix[i] = prefix[i-1] +diff[i];
    }

    int res =0;
    for(int i=1; i<=n; i++) {
        if(w[i]-prefix[i]<=0) {
            res++;
        }
    }
    cout<<res<<"\n";
}