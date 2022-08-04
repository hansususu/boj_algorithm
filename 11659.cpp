#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, arr[100001], dp[100001];
    cin >> n >> m;

    for (int k = 1; k <= n; k++) {
        int a;
        cin >> a;
        arr[k] = a;
        dp[k] = a+dp[k-1];
    }
    while (m--) {
        int i, j;
        cin >> i >> j;
        cout << dp[j]-dp[i-1] << '\n';
    }
}