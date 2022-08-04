#include <iostream>
using namespace std;

int main() {
    int dp[501];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        int tmp = i;
        while (1) {
            if (tmp % 5 == 0) {
                cnt++;
                tmp /= 5;
            }
            else break;
        }
        dp[i] = cnt;
    }
    int ans = 0;
    for (int i =1; i<= n; i++) ans += dp[i];
    cout << ans;
}