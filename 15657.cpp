#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 8;
int n, m;
int arr[MAX];
int visited[MAX];

void func(int idx, int start, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[visited[i]] << " ";
        }
        cout << '\n';
        return;
    }
    if (idx == n) return;
    for (int i = start; i< n; i++) {
        visited[idx] = i;
        func(idx+1, i, cnt+1);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    func(0, 0, 0);
}