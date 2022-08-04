#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ans = 0, cnt = 0, tmp;
    while (cnt != n) {
        ans++;
        tmp = ans;
        while (tmp != 0) {
            if (tmp % 1000 == 666) {
                cnt++;
                break;
            }
            else tmp /= 10;
        }
    }
    cout << ans;
    return 0;
}