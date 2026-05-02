#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> a(6);
    vector<int> b(6);
    vector<int> c(6);
    for(int i=0; i<6; i++) {
        cin>>a[i];
    }
    for(int i=0; i<6; i++) {
        cin>>b[i];
    }
    for(int i=0; i<6; i++) {
        cin>>c[i];
    }
    int aCnt = 0;
    for(int i=0; i<6; i++) {
        if(a[i]==4 || a[i]==5|| a[i]==6) {
            aCnt++;
        }
    }
    int bCnt = 0;
    for(int i=0; i<6; i++) {
        if(b[i]==5||b[i]==6) {
            bCnt++;
        }
    }
    int cCnt =0;
    for(int i=0; i<6; i++) {
        if(c[i]==6) {
            cCnt++;
        }
    }
    long double ans = 1;
    ans*= (long double)aCnt / (long double)6;
    ans*= (long double)bCnt / (long double) 6;
    ans*= (long double)cCnt/(long double)6;
    cout<<ans<<"\n";
}