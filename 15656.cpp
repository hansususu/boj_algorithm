#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 7;
int n, m;
int arr[MAX];
int visited[MAX];

void func(int idx) {
    if (idx == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[visited[i]] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        visited[idx] = i;
        func(idx+1);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    func(0);
}