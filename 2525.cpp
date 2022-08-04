#include <iostream>
using namespace std;

int main() {
    int a, b, c, h, m;
    cin >> a >> b;
    cin >> c;
    
    h = a;
    m = b +c;
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }
    h %= 24;
    cout << h << " " << m;
    return 0;
}