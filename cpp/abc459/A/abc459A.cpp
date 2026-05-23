#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin>>x;
    string b = "HelloWorld";
    for(int i=1; i<=b.size(); i++) {
        if(i==x) {
            continue;
        }
        cout<<b[i-1];
    }
}