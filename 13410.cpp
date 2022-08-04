#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        string s = to_string((i*n));
        reverse(s.begin(), s.end());
        int tmp = stoi(s);
        ans = max(ans, tmp);
    }
    cout << ans;
}