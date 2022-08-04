#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    int arr[n+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int start = 0, end = 0;
    int res = arr[0];
    while (start <= end && end < n) {
        if (res < m) {
            res += arr[++end];
        }
        else if (res == m) {
            cnt++;
            res += arr[++end];
        }
        else if (res > m) {
            res -= arr[start++];
            if (start > end) {
                end = start;
                res = arr[start];
            }
        }
    }
    cout << cnt;
}