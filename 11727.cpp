#include <iostream>
using namespace std;

int main() {
    int d[1001];
    d[1]= 1, d[2] = 3, d[3] = 5; d[4] = 11;
    int n;
    cin >> n;
    for (int i = 5; i<= n; i++) {
        d[i] = (d[i-1] + d[i-2] * 2) %10007;
    }
    cout << d[n];
}