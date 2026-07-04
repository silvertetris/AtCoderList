#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a(n, 0);
    int idx1 = 0;
    int idx2 = n-1;
    bool flag = false;//좌우좌우
    for(int i =n-1; i>=0; i--) {
        if(flag) {
            if(s[i]=='o') {
                a[idx2] = i+1;
                flag = false;
                idx2--;
            }else {
                a[idx1] = i+1;
                idx1++;
            }
        }
        else {
            if(s[i]=='o') {
                a[idx1] = i+1;
                flag = true;
                idx1++;
            }else {
                a[idx2] = i+1;
                idx2--;
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}