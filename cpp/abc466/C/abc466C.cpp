#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
int n;

void solve() {
    cin >> n;

    int result = 0;
    int end = 1;

    for (int i = 1; i < n; ++i) {
        if(end<i) {
            end = i;
        }
        while(end<n) {
            cout<< "? " <<i <<" "<<end+1<<"\n";
            cout.flush();
            string ans;
            cin>>ans;
            if(ans=="No") {
                break;
            }
            end++;
        }
        result+=end-i;
    }
    cout << "! " << result << "\n";
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}