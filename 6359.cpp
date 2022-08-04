#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<bool> prison(n+1, false);
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                prison[j] = !prison[j];
            }
        }
        int res = 0;
        for (int i = 1; i <= n; i++) res += prison[i];
        cout << res << '\n';
    }
}