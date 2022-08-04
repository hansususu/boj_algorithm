#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    vector<int> arr;
    vector<int> cost;

    cin >> n >> k;
    arr.resize(n);
    cost.resize(n-1);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i< n; i++) {
        cost[i-1] = arr[i] - arr[i-1];
    }
    sort(cost.begin(), cost.end());
    long long ans = 0;
    for (int i = 0; i < n-k; i++) {
        ans += cost[i];
    }
    cout << ans;
}