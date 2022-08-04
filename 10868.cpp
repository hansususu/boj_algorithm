#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
#define MAX 400005

int n, m, a, b;
ll Tree[MAX*10];
ll node[MAX];

ll init(ll arr[], ll treeIdx, ll dataIdxL, ll dataIdxR) {
    if (dataIdxL == dataIdxR) return Tree[treeIdx] = arr[dataIdxL - 1];
    ll mid = (dataIdxL + dataIdxR) / 2;
    return Tree[treeIdx] = min(init(arr, 2 * treeIdx, dataIdxL, mid), init(arr, 2 * treeIdx + 1, mid + 1, dataIdxR));
}

ll Qeury(ll queryL, ll queryR, ll treeIdx, ll dataIdxL, ll dataIdxR) {
    if (queryL > dataIdxR || dataIdxL > queryR) return 1000000001;
    if (dataIdxL >= queryL && queryR >= dataIdxR) return Tree[treeIdx];
    ll mid = (dataIdxL + dataIdxR) / 2;
    return min(Qeury(queryL, queryR, 2 * treeIdx, dataIdxL, mid), Qeury(queryL, queryR, 2 * treeIdx+1, mid+1, dataIdxR));
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> node[i];
    }
    init(node, 1, 1, n);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cout << Qeury(a, b, 1, 1, n) << '\n';
    }
}