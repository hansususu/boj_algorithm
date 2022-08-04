#include <iostream>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = 1; i < a+1; i++) {
        int c = i;
        while (c) {
            if (c % 10 == b) cnt += 1;
            c /= 10;
        }
    }
    cout << cnt;
}