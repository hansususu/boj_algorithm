#include <iostream>
using namespace std;

int n, arr[201], dp[201], Max = 0;

int main() {
    cin >> n;
    for (int i = 1; i<= n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j <= i; j++) {
            if (arr[j] < arr[i] && dp[i] < dp[j]+1) {
                dp[i] = dp[j] + 1;
            }
        }
        if (Max < dp[i]) Max = dp[i];
    }

    cout << n - Max;
}