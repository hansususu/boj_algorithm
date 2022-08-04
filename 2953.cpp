#include <iostream>
using namespace std;

int main() {
    int arr[5][5] = { 0 }, max = 0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr[i][4] = sum;
        if (arr[i][4] > arr[max][4]) max = i;
    }
    cout << max+1 << ' ' << arr[max][4];
}