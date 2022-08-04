#include <iostream>
using namespace std;

int main() {
    int t, c;
    cin >> t;
    while (t--) {
        cin >> c;
        int q = 0, d = 0, n = 0, p = 0;
        while (c) {
            if (c >= 25) {
                q++;
                c -= 25;
            }
            else if (c >= 10) {
                d++;
                c -= 10;
            }
            else if ( c >= 5) {
                n++;
                c -= 5;
            }
            else {
                p++;
                c -= 1;
            }
        }
        cout << q << " " << d << " " << n << " " << p << '\n';
    }
}