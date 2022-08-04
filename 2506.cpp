#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0, score = 0;
    cin >> n;
    for (int i = 0; i< n; i++) {
        cin >> num;
        if (num == 1) {
            score++;
            sum += score;
        }
        else score = 0;
    }
    cout << sum;
}