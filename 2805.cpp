#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, m;
int maxi = 0;
long long sum;
int ans;
vector<int> tree;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tree.push_back(x);
        if (x >= maxi) maxi = x;
    }
    int left = 0, right = maxi;
    while (left <= right) {
        int mid = (left + right) / 2;
        sum = 0;
        for (int i = 0; i < n; i++) {
            if (mid < tree[i]) sum+= tree[i]-mid;
        }
        if (sum >= m) {
            if (ans < mid) ans = mid;
            left = mid +1;
        }
        else right = mid - 1;
    }
    cout << ans;
}