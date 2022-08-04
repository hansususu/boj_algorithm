#include <iostream>
#include <vector>
using namespace std;

int k, n, arr[1100]={ 0 };
vector<int> tree[11];

void dfs(int start, int end, int level) {
    int mid = (start+end)/2;
    tree[level].push_back(arr[mid]);
    if (start==end) return;
    dfs(start,mid-1, level+1);
    dfs(mid+1, end, level+1);
}

int main() {
    cin >> k;
    int cnt = 1;

    for (int i = 0; i < k; i++) {
        cnt *= 2;
    }
    cnt--;
    for (int i = 0; i < cnt; i++) {
        cin >> n;
        arr[i] = n;
    }
    dfs(0, cnt-1, 1);

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < tree[i].size(); j++) {
            cout << tree[i][j] << " ";
        }
        cout << '\n';
    }
    
}