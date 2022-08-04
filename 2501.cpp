#include <iostream>
using namespace std;

int main() {
    int n, k, arr[10000], tmp = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            k--;
            if (k == 0) {
                cout << i;
                return 0;
            }
        }  
    }
    cout << '0';
}