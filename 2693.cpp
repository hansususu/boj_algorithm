#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[11], n;
    cin >> n;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+10);
        cout << arr[10-3] << '\n';
    }
}