#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l, a, b, c, d, day;
    cin >> l >> a >> b >> c >> d;
    if (a % c == 0) day = a/c;
    else day = a/c+1;
    if (b%d == 0) day = max(day, b/d);
    else day = max(day, b/d+1);
    cout << l - day;
}