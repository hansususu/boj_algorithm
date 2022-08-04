#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int dp[10001];
        for (int i = 0; i < 10001; i++) {
            dp[i] = 0;
        }
        dp[0] = 1;
        int n;
        int coin[21];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> coin[i];
        }

        int m;
        cin >> m;
        for (int i = 0; i < n; i++) {
            for (int j = coin[i]; j <= m; j++) {
                dp[j] += dp[j-coin[i]];
            }
        }
        cout << dp[m] << '\n';
    }
}