#include <bits/stdc++.h>

#define ll long long

using namespace std;

void mininit(vector<int> &seg, vector<int> &h, int node, int l, int r) {
    if(l==r) {
        seg[node] = h[l];
    }else {
        int mid = (l+r)/2;
        mininit(seg, h, 2*node, l, mid);
        mininit(seg, h, 2*node+1, mid+1, r);
        if(seg[2*node]>seg[2*node+1]) {
            seg[node] = seg[2*node+1];
        } else {
            seg[node] = seg[2*node];
        }
    }
}

void maxinit(vector<int> &seg, vector<int> &h, int node,int l, int r) {
    if(l==r) {
        seg[node] = h[l];
    } else {
        int mid = (l+r)/2;
        maxinit(seg, h, 2*node, l, mid);
        maxinit(seg, h, 2*node+1, mid+1, r);
        if(seg[2*node]>seg[2*node+1]) {
            seg[node] = seg[2*node];
        } else {
            seg[node] = seg[2*node+1];
        }
    }
}
int minquery(vector<int> &seg, int node, int start, int end, int l, int r) {
    if(start>r || l>end) {
        return 1100000000;
    } else if(l<=start && end<=r) {
        return seg[node];
    } else {
        int mid = (start+end)/2;
        int m1 = minquery(seg, 2*node, start, mid, l, r);
        int m2= minquery(seg, 2*node+1, mid+1, end, l, r);
        return min(m1, m2);
    }
}
int maxquery(vector<int> &seg, int node, int start, int end, int l, int r) {
    if(start>r || l>end) {
        return -1100000000;
    } else if(l<=start && end<=r) {
        return seg[node];
    } else {
        int mid = (start+end)/2;
        int m1 = maxquery(seg, 2*node, start, mid, l, r);
        int m2 = maxquery(seg, 2*node+1, mid+1, end, l, r);
        return max(m1, m2);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, d;
    cin>>n>>k>>d;
    vector<int> h(n);
    for(int i=0; i<n; i++) {
        cin>>h[i];
    }
    vector<int> minseg(4*n+1);
    vector<int> maxseg(4*n+1);
    mininit(minseg, h, 1, 0, n-1);
    maxinit(maxseg, h, 1, 0, n-1);
    int res=0;
    int r=0;

    for (int i = 0; i < n; i++) {
    if (r < i) r = i;
    while (r < n) {
        int mx = maxquery(maxseg, 1, 0, n-1, i, r);
        int mn = minquery(minseg, 1, 0, n-1, i, r);
        if (mx - mn <= d) {
            res = max(res, r - i + 1);
            r++;
        } else {
            break;
        }
    }
}
    if(res<k) {
        cout<<-1<<"\n";
    }else {
        cout<<res<<"\n";
    }
}