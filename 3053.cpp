#include <iostream>
#include <cmath>
#define PI 3.1415926535897932
using namespace std;

int main() {
    long double r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * PI << endl << 2 * r *r << endl;
}