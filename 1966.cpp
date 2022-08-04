#include <iostream>
#include <queue>
using namespace std;

int main() {
    int cnt = 0, t, n, m, ip;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cnt = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int j = 0; j < n; j++) {
            cin >> ip;
            q.push({j, ip});
            pq.push(ip);
        }
        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                cnt++;
                if (index == m) {
                    cout << cnt << endl;
                    break;
                }
            }
            else q.push({index, value});
        } 
    }
}