#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int dp[301];

    cin >> n >> m;
    dp[0] = n-1;
    for (int i = 1; i < m; i++) {
        dp[i] = dp[i-1] + n;
    }
    cout << dp[m-1];
}