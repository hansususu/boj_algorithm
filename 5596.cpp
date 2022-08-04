#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, t, a1, b1, c1, d1, s;
    cin >> a >> b >> c >> d;
    t = a + b + c + d;
    cin >> a1 >> b1 >> c1 >> d1;
    s= a1 + b1 + c1 + d1;
    if (t >= s) cout << t;
    else cout << s;
}