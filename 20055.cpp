#include <iostream>
#include <algorithm>
#include <deque>
#define X first
#define Y second
using namespace std;

using ll = long long;
int n, k;
deque<pair<int, int>> dq;

int main() {
    cin >> n >> k;
    int num = n * 2;

    while (num--) {
        int x;
        cin >> x;
        dq.push_back({0,x});
    }
    int stage = 0;
    while (1) {
        stage++;
        auto back = dq.back();
        dq.pop_back();
        dq.push_front(back);
        if (dq[n-1].first == 1) dq[n-1].first = 0;

        for (int i = n-2; i >= 0; i--) {
            if (dq[i].first == 1 && dq[i+1].second >= 1 && dq[i+1].first == 0) {
                dq[i].first = 0;
                dq[i+1].first = 1;
                dq[i+1].second -= 1;
            }
        }

        if (dq[n-1].first == 1) dq[n-1].first = 0;

        if (dq[0].second != 0) {
            dq[0].first = 1;
            dq[0].second -= 1;
        }
        int cnt = 0;
        for (int i = 0; i < 2*n; i++) {
            if (dq[i].second == 0) cnt++;
        }
        if (cnt >= k) break;
    }
    cout << stage;
}
