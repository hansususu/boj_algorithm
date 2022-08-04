#include <iostream>
using namespace std;

int main() {
    int l, t;
    cin >> l;
    if (l % 5 > 0) cout << l/5+1;
    else cout << l/5;
}