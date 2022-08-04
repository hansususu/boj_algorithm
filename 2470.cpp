#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[100001];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int start = 0, end = n-1;
    int min = 2000000000;
    int ans1, ans2;
    while (start < end) {
        int sum = arr[start] + arr[end];
        if (min > abs(sum)) {
            min = abs(sum);
            ans1 = arr[start];
            ans2 = arr[end];
            if (sum == 0) break;
        }
        if (sum < 0) start++;
        else end--;
    }
    cout << ans1 << " " << ans2;
}