#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum != 180) cout << "Error\n";
    else if (a == 60 && b ==60 && c == 60) cout << "Equilateral\n";   
    else if (sum == 180 && (a == b || b == c || a == c)) cout << "Isosceles\n";
    else cout << "Scalene\n";
}