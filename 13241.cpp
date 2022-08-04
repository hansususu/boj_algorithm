#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

long long gcd(int a, int b) {
    int tmp;
    if (a < b) swap(a, b);
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}