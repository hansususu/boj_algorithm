#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[1001], dp[1001], rdp[1001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        rdp[i] = 1;
        for (int j = n; j > i; j--) {
            if (arr[i] > arr[j] && rdp[i] < rdp[j] + 1) {
                rdp[i] = rdp[j] + 1;
            } 
        }
    }
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = max(res, dp[i]+rdp[i]-1);
    }
    cout << res;
}