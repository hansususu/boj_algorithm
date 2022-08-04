#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> money = {500, 100, 50, 10, 5, 1};
    int pay, cnt = 0;
    cin >> pay;
    pay = 1000-pay;
    for (int i = 0; i < 6; i++) {
        for (;;) {
            if (pay >= money[i]) {
                pay -= money[i];
                cnt++;
            }
            else break;
        }
    }
    cout << cnt;
}