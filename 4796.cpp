#include <iostream>
using namespace std;

int main() {
    int l, p, v, i = 0;
    while (1) {
        i++;
        cin >> l >> p >> v;
        if (l == 0 && p == 0 && v == 0) break;
        int ans = (v/p) * l + min(v%p, l);
        cout << "Case " << i << ": " << ans << '\n';
    }
}