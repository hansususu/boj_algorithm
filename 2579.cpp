#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, dp[301], stairs[301];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stairs[i];
    }
    dp[0] = stairs[0];
    dp[1] = max(stairs[1], stairs[0]+stairs[1]);
    dp[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);
    for (int i =3; i< n; i++) {
        dp[i] = max(stairs[i]+dp[i-2], stairs[i]+stairs[i-1]+dp[i-3]);
    }
    cout << dp[n-1];
}