#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cnt = 1;
    while (1) {
        double r, w, l;
        cin >> r;
        if (r == 0) break;
        cin >> w >> l;
        if (sqrt((l/2)*(l/2) + (w/2)*(w/2)) <= r) {
            cout << "Pizza " << cnt << " fits on the table.\n";
        }
        else cout << "Pizza " << cnt << " does not fit on the table.\n";
        cnt++;
    }
}