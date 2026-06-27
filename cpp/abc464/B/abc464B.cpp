#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int h,w ;
    cin>>h>>w;
    vector<vector<char>> board(h, vector<char>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>board[i][j];
        }
    }
    int rowfirst = 0;
    int rowsecnd = h-1;
    int columnfirst  =0;
    int columnsecond= w-1;
    for(int i=0; i<h; i++) {
        bool flag = false;
        for(int j=0; j<w; j++) {
            if(board[i][j]=='#') {
                rowfirst= i;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    for(int i=h-1; i>=0; i--) {
        bool flag = false;
        for(int j=0; j<w; j++) {
            if(board[i][j] =='#') {
                rowsecnd = i;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    for(int i=0; i<w; i++) {
        bool flag = false;
        for(int j=0; j<h; j++) {
            if(board[j][i]=='#') {
                columnfirst=i;
                flag = true;
                break;
            }
        }
        if(flag) {
            break;
        }
    }
    for(int i=w-1; i>=0; i--) {
        bool flag = false;
        for(int j=0; j<h; j++) {
            if(board[j][i]=='#') {
                columnsecond=i;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    for(int i=rowfirst; i<=rowsecnd; i++) {
        for(int j=columnfirst; j<=columnsecond; j++) {
            cout<<board[i][j];
        }
        cout<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}