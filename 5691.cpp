#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        else {
            cout << 2 * a -b << '\n'; 
        }
    }
}