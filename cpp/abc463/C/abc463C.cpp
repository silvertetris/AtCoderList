#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<pair<int, int>> a(n);//l, h
    for(int i=0; i<n; i++) {
        cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(), a.end());
    vector<int> suffix(n);
    suffix[n-1] = a[n-1].second;//h순
    for(int i=n-2; i>=0; i--) {
        suffix[i]= max(suffix[i+1], a[i].second);
    }

    int q;
    cin>>q;
    
    while(q--) {
        int t;
        cin>>t;
        int l =0;
        int r = n-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(a[mid].first>t) {
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        cout<<suffix[l]<<"\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}