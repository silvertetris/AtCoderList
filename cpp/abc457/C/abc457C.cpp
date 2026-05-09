#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, k;//k가 그 최종에 있는거 뽑아야함
    cin>>n>>k;
    vector<vector<int>> a(n);
    vector<int> c(n);
    k--;
    for(auto i=0; i<n; i++) {
        int l;
        cin>>l;
        for(auto j=0; j<l; j++) {
            int input;
            cin>>input;
            a[i].push_back(input);
        }
    }
    ll idx = -1;

    for(auto i=0; i<n; i++) {
        cin>>c[i];//각 인덱스에있는 값만큼 반복해서 최종 vector에 넣어야함
        ll temp = (ll)a[i].size() * (ll)c[i];
        if(idx==-1) {
            if(k<temp) {
                idx = i;
            }
            else {
                k-=temp;
            }
        } 
    }
    /*
    딱 0일때
    idx = i;
    그다음껄로 넘어가니까 같으면 그 안에서 처리해야함 -> idx = 0
    */
    cout<<a[idx][k%a[idx].size()]<<"\n";
}