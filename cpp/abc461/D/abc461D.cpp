#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w, k;

    cin>>h>>w>>k;

    vector<vector<int>> s(h+1, vector<int> (w+1, 0));

    for(int i=1; i<=h; i++) {
        string temp ="";
        cin>>temp;

        for(int j=1; j<=w; j++) {
            s[i][j] = temp[j-1]-'0';
        }
    }

    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            s[i][j] +=s[i-1][j];
        }
    }

    ll res = 0;
    for(int i=1; i<=h; i++) {
        for(int j=i; j<=h; j++) {
            vector<int> save(w+1, 0);
            for(int p=1; p<=w; p++) {
                save[p] = save[p-1] + (s[j][p] - s[i-1][p]);
            }
            int r1=0;
            int r2=0;
            for(int l=0; l<w; l++) {//l을 직전까지 붙일거
                r1 = max(r1, l+1);
                r2 = max(r2, l+1);
                while(r1<=w && save[r1]- save[l]<k) {
                    r1++;
                }
                while(r2<=w && save[r2]-save[l]<=k) {
                    r2++;
                }
                res+=r2-r1;
            }
        }
    }

    cout<<res<<"\n";
}