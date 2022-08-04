#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, p1, q1, x2, y2, p2, q2;
    int a, b, c, d, dx, dy;
    for (int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;
        a = max(x1, x2);
        b = min(p1, p2);
        c = max(y1, y2);
        d = min(q1, q2);

        dx = b - a;
        dy = d - c;

        if (dx > 0 && dy > 0) cout << 'a' << endl;
        else if (dx < 0 || dy < 0) cout << 'd' << endl;
        else if (dx == 0 && dy == 0) cout << 'c' << endl;
        else cout << 'b' << endl;
    } 
    return 0;
}