#include <iostream>
using namespace std;

int main() {
    int total = 0, max = 0;
    for (int i = 0; i < 4; i++) {
        int in, out;
        cin >> out >> in;
        total = total + in - out;
        if (max < total) max = total;
    }
    cout << max;
}