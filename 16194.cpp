#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> dp, p;

    cin >> n;
    dp.resize(n+1);
    p.resize(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        dp[i] = p[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i] = min(dp[i], dp[j]+p[i-j]);
        }
    }
    cout << dp[n];
}