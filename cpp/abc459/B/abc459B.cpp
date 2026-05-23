#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        string input="";
        cin>>input;
        if(input[0]=='a' || input[0]=='b'||input[0]=='c') {
            cout<<2;
        }
        else if(input[0]=='d' || input[0]=='e'||input[0]=='f') {
            cout<<3;
        }
        else if(input[0]=='g' || input[0]=='h'||input[0]=='i') {
            cout<<4;
        }
        else if(input[0]=='j' || input[0]=='k'||input[0]=='l') {
            cout<<5;
        }
        else if(input[0]=='m' || input[0]=='n'||input[0]=='o') {
            cout<<6;
        }
        else if(input[0]=='p' || input[0]=='q'||input[0]=='r' || input[0]=='s') {
            cout<<7;
        }
        else if(input[0]=='t' || input[0]=='u'||input[0]=='v') {
            cout<<8;
        }else {
            cout<<9;
        }

    }
}