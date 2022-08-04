#include <iostream>
#include <cstring>
using namespace std;

int n;
long long dp[61][61];

long long solve(int one, int half) {
    if (!one) return 1;
    long long &ret = dp[one][half];
    if (ret != -1) return ret;
    ret = 0;

    if (one > 0) ret += solve(one-1, half+1);
    if (half > 0) ret += solve(one, half-1);
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    while(n) {
        memset(dp, -1, sizeof(dp));
        cout << solve(n-1, 1) << '\n';
        cin >> n;
    }
    return 0;
}