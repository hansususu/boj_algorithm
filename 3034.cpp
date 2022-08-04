#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, w, h, l;
    cin >> n >> w >> h;
    l = sqrt(w*w + h*h);
    while (n--) {
        int a;
        cin >> a;
        if (a <= w || a <= h || a <= l) cout << "DA\n";
        else cout << "NE\n";
    }
}