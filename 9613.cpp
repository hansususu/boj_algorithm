#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    int tmp = 0;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v;
        int x = 0;
        for (int j = 0; j< n; j++) {
            cin >> x;
            v.push_back(x);
        }
        int sum = 0;
        for (int k = 0; k < n; k++){
            for (int l = k+1; l < n; l++) {
                sum += gcd(v[k], v[l]);
            }
        }
        cout << sum << '\n';
    }
}