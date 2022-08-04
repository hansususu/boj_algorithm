#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    long long arr[100001];
    long long n, m;
    cin >> n >> m;
    long long sum = 0, low = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        low = max(low, arr[i]);
    }
    long long high = sum;
    while (low <= high) {
        long long cnt = 0, tmpSum = 0;
        long long mid = (low + high) / 2;
        for (int i = 0; i < n; i++) {
            if (tmpSum + arr[i] > mid) {
                tmpSum = 0;
                cnt += 1;
            }
            tmpSum += arr[i];
        }
        if (tmpSum != 0) cnt += 1;

        if (cnt <= m) high = mid - 1;
        else {
            low = mid + 1;
        }
    }
    cout << low;
}