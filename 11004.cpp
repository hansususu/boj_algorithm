#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    int arr[5000001];

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[k-1];
}