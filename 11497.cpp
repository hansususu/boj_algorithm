#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n-2; i++) {
            ans = max(ans, v[i+2]-v[i]);
        }
        cout << ans << '\n';
    }
}