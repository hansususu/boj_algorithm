#include <iostream>
using namespace std;

int main() {
    int a, b, num = 0, maxnum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        num = num - a + b;
        if (num > maxnum) maxnum = num;
    }
    cout << maxnum;
}