#include <iostream>
using namespace std;

int main() {
    long long a, b;
    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a > b)  cout << "Yes\n";
        else cout << "No\n";
    }
}