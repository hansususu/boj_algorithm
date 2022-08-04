#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (100 > n) cout << n/10 + n %10;
    else if (n%10 == 0) cout << n /100 + 10;
    else cout << n% 100 + 10;
}