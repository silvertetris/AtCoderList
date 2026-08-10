#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n, 0);
    vector<int> idxs;
    long long ans = 0;

    for (int i = 0; i < q; i++){
        int type;
        cin >> type;

        if (type == 1){
            int x;
            cin >> x;
            x--; // 0-indexed로 변환

            if (a[x] == 0){
                idxs.push_back(x);
            }
            ans ^= a[x] ^ (a[x] + 1);
            a[x] += 1;
        } else {
            for (int v : idxs){
                ans ^= a[v] ^ (a[v] - 1);
                a[v] -= 1;
            }
            // 0이 된 인덱스는 idxs에서 제거
            vector<int> newIdxs;
            newIdxs.reserve(idxs.size());
            for (int v : idxs){
                if (a[v] != 0) newIdxs.push_back(v);
            }
            idxs = move(newIdxs);
        }

        cout << ans << "\n";
    }

    return 0;
}