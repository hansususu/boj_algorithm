#include <iostream>
using namespace std;

int main() {
    int num[110] = { 0 };
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    for (int i = n; i > 0; i--) {
        while (num[i] <= num[i-1]) {
            num[i-1]--;
            cnt++;
        }
    }
    cout << cnt;
}