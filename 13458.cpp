#include <iostream>
#define max 1000001
using namespace std;

int main() {
    int n, b, c;
    long long sum = 0;
    int v[max];

    cin >> n;
    for (int i =1; i<= n; i++) {
        cin >> v[i];
    }
    cin >> b >> c;

    for (int i = 1; i <= n; i++) {
        v[i] = v[i] - b;
        sum++;
        if (v[i] > 0) {
            sum += v[i] / c;
            if (v[i] % c > 0) sum++;
        }
    }
    cout << sum;
}