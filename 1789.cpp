#include <iostream>
using namespace std;

int main() {
    int n = 1, res = 0;
    long long sum = 0;
    long long s;
    cin >> s;
    while (1) {
        sum += n;
        res++;
        if (sum > s) {
            res--;
            break;
        }
        n++;
    }
    cout << res;
}