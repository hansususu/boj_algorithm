#include <iostream>
using namespace std;

int main() {
    long long dp[1000001];
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for (int i =3; i<= n; i++) {
        dp[i] = (dp[i-2] + dp[i-1])%15746;
    }
    cout << dp[n];
}