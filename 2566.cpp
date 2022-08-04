#include <iostream>
using namespace std;

int main() {
    int max = 0, x, y;
    int arr[9][9] = { };
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] > max) {
                y = i+1;
                x = j+1;
                max = arr[i][j];
            }
        }
    } 
    cout << max << "\n" << y << " " << x << '\n';
}