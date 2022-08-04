#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    long long num, ans = 0;
    char op;
    cin >> num;
    ans = num;
    while (1) {
        cin >> op;
        if (op == '=') {
            cout << ans << endl;
            break;
        }
        cin >> num;
        if (op == '+') ans += num;
        else if (op == '-') ans -= num;
        else if (op == '*') ans *= num;
        else if (op == '/') ans /= num;
    }
}