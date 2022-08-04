#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, m, k, h;;
    int x, y, ans = 0;

    int dp[1001];
    vector<int> v;
    cin >> t;

    for (int i = 0; i< t; i++) {
        cin >> k;
        v.emplace_back(k);
        int dp_max = 0;
        for (int j = 0; j < v.size(); j++) {
            if (v[i] > v[j]) {
                if (dp_max < dp[j]) dp_max = dp[j];
            }
        }
        dp[i] = dp_max+1;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}