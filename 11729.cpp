#include <iostream>
using namespace std;
void hanoi(int n, int start, int to, int by) {
    if (n == 1) cout << start << ' ' << to << "\n";
    else {
        hanoi(n-1, start, by, to);
        cout << start << ' ' << to << "\n";
        hanoi(n-1, by, to, start);
    }
}
int main() {
    int num;
    cin >> num;
    cout << (1 << num) -1 << "\n";
    hanoi(num, 1, 3, 2);
}