#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            res += tmp;
        }
        cout << res << '\n';
    }
}