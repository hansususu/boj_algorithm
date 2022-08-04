#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], num[10];

void solve(int x, int len) {
    if (len == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    int last = 0;
    for (int i = x; i< n; i++) {
        if (num[i] != last) {
            arr[len] = num[i];
            last = arr[len];
            solve(i, len+1);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num+n);
    solve(0, 0);
}