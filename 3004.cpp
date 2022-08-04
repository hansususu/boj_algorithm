#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = n / 2 +1;
    int col = n - row + 2;
    int res = row * col;
    cout << res;
}