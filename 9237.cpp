#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt = max(cnt, v[i]+i+1);
    }
    cout << cnt+1;
}