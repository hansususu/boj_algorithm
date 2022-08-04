#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ans = 0, N, K, list[10001];
    cin >> K >> N;
    int mi = 0;
    for (int i = 0; i < K; i++) {
        cin >> list[i];
        if (mi < list[i]) mi = list[i];
    }
    long long left = 1, right = mi, mid;
    while (left <= right) {
        mid = (left + right) /2;
        int now = 0;
        for (int i = 0; i < K; i++) {
            now += list[i]/mid;
        }
        if (now >= N) {
            left = mid +1;
            if (ans < mid) ans = mid;
        }
        else right = mid -1;
    }
    cout << ans << '\n';
}