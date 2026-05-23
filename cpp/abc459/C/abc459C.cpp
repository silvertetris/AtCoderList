#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;
/*
1: x-1 칸에다가 블록 놓음 , 그리고 칸에 최소 1개 블록있으면 다 1개 --
2: y이상인 블록 개수 출력
segtree = 최소 값

세그트리를 구간의 최소값으로 선택하면

1연산을 할때도 문제
그니까 그 값을 ++ 하는건 괜찮지만 전체 —은 좀 빡세짐

—도할 수 있음
—은 따로 연산하는거임 그냥 계속 더하다가
세그트리 루트가 변하면-> —한 연산을 한척
근데, 2번이 문제임
2번을 어떻게 출력할지가 문제
어떻게 세그트리로 각 구간에 특정 값보다 높은 값이 몇개 있는지 출력하지??

그럼 2번 연산때마다 세그트리를 하나 더 선언해서, 이번에는 구간에서 특정값 이상인 것이 몇개인지 세는 세그트리를 선언??
하면 2번도 해결될듯 ㄴㄴ 이렇게하면 안됨

배열을 하나 더 만듦 -> 3 10^5 까지
그리고, 이건 a배열에서 특정 값
*/

void updateFirst(vector<int> &seg, int node, int l, int r, int idx, vector<int> &a) {//특정값 더하는 연산
    if(idx<l || r<idx) {
        return;
    }
    else if(l==r) {
        seg[node] = a[l];
    } 
    else {
        int mid = (l+r)/2;
        updateFirst(seg, 2*node, l, mid, idx, a);
        updateFirst(seg, 2*node+1, mid+1, r, idx, a);
        if(seg[2*node]>seg[2*node+1]) {
            seg[node] = seg[2*node+1];
        }else {
            seg[node] = seg[2*node];
        }
    }
}
void updateCnt(vector<int> &seg, int node, int l, int r, int idx, vector<int> &cnt) {
    if(idx < l || r < idx) {
        return;
    }
    if(l == r) {
        seg[node] = cnt[l];
        return;
    }
    int mid = (l + r) / 2;
    updateCnt(seg, 2*node, l, mid, idx, cnt);
    updateCnt(seg, 2*node+1, mid+1, r, idx, cnt);
    seg[node] = seg[2*node] + seg[2*node+1];
}
int sumq(vector<int> &seg, int node, int start, int end, int l, int r) {
    if(start>r || end < l) {
        return 0;
    }
    else if(l<=start && end<=r) {
        return seg[node];
    } else {
        int mid = (start+end) / 2;
        return sumq(seg, 2*node, start, mid, l, r) + sumq(seg, 2*node+1,mid+1, end, l, r);
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin>>n>>q;
    vector<int> a(n, 0);
    vector<int> seg(4*n+1, 0);
    vector<int> cnt(6*100001, 0);
    vector<int> cntSeg(4*600001, 0);
    int least = 0;
    for(int i=0; i<q; i++) {
        int op, input;
        cin>>op>>input;
        //우리가 가진 정보, 루트에서 최소 least값, 해당 값을 가진게 몇개인지.
        //세그트리를 2개만듦, 1. 기존에 있던거, 2. 배열에서 특정 값 이상인거 부분배열 합 구하는거;
        if(op==1) {
            --input;//a[input] 은 ++된 값 그자체임 그니까 이걸 해주면 그 이전에 있던건 --
            a[input]++;
            updateFirst(seg, 1, 0, n-1, input, a);
            least = seg[1];
            cnt[a[input]]++;
            cnt[a[input]-1]--;
            updateCnt(cntSeg, 1, 0, 300000, a[input], cnt);
            updateCnt(cntSeg, 1, 0, 300000, a[input]-1, cnt);
        }else {
            int temp = least +input;
            cout<<sumq(cntSeg, 1, 0, 300000, temp, 300000)<<"\n";
        }
    }
}