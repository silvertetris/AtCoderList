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

    vector<vector<int>> s(h, vector<int> (w));

    for(int i=0; i<h; i++) {
        string temp ="";
        cin>>temp;

        for(int j=0; j<w; j++) {
            s[i][j] = temp[j]-'0';
        }
    }

    vector<vector<int>> rowPrefix(h+1, vector<int> (w+1, 0));
    vector<vector<int>> columnPrefix(h+1, vector<int> (w+1, 0));
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            rowPrefix[i][j] = rowPrefix[i-1][j] + s[i-1][j-1];
        }
    }
    for(int i=1; i<=w; i++) {
        for(int j=1; j<=h; j++) {
            columnPrefix[j][i] = columnPrefix[j][i-1]+ s[j-1][i-1];
        }
    }
    for(int i=0; i<n; i++) {
        
    }    
}