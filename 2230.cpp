#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    long long m;
    long long arr[100000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int start = 0, end = 0;
    long long diff = 0, res = 2000000001;
    while (start <= end && end < n) {
        diff = arr[end] - arr[start];
        if (diff >= m) {
            res = min(res, diff);
            ++start;
        }
        else ++end;
    }
    cout << res;
}