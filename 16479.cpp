#include <iostream>
using namespace std;

int main() {
    double k, d1, d2;
    cin >> k >> d1 >> d2;
    cout << k * k - ((max(d1, d2)-min(d1, d2))/2) *((max(d1, d2)-min(d1, d2))/2);
}