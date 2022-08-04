#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n, m;
int arr[10001] = {0, };
int pindex = 0, res = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) pindex++;
    }
    sort(arr, arr+n);
    for (int i = n - 1; i >= pindex; i -= m) {
        res += (arr[i] * 2);
    } 
    for (int i = 0; i < pindex; i += m) {
        res += abs(arr[i] * 2);
    }
    res -= max(abs(arr[0]), abs(arr[n-1]));

    cout << res << endl;
}