#include <iostream>
using namespace std;

int n;
int operands[11];
int operators[4];
int mymin = 1000000001;
int mymax = -1000000001;

void answer(int res, int idx) {
    if (idx == n) {
        if (res > mymax) mymax = res;
        if (res < mymin) mymin = res;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (operators[i] > 0) {
            operators[i]--;
            if (i == 0) answer(res + operands[idx], idx+1);
            else if (i == 1) answer(res - operands[idx], idx + 1);
            else if (i == 2) answer(res * operands[idx], idx+1);
            else answer(res / operands[idx], idx+1);
            operators[i]++;
        }
    }
    return;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> operands[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> operators[i];
    }
    answer(operands[0], 1);
    cout << mymax << '\n' << mymin;
}