#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

priority_queue<int, vector<int>, greater<int>> min_pq;
priority_queue<int, vector<int>, less<int>> max_pq;
map<int, int> dict;

int T, k, n;
char c;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    
    while (T) {
        while (!min_pq.empty()) min_pq.pop();
        while (!max_pq.empty()) max_pq.pop();
        dict.clear();
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> c >> n;
            if (c == 'I') {
                min_pq.push(n);
                max_pq.push(n);

                if (dict.count(n) == 0) dict[n] = 1;
                else dict[n]++;
            }
            else {
                if (n == 1) {
                    while (!max_pq.empty() && dict[max_pq.top()] == 0) {max_pq.pop();}
                    if (!max_pq.empty()) {
                        dict[max_pq.top()]--;
                        max_pq.pop();
                    }
                }
                else {
                    while (!min_pq.empty() && dict[min_pq.top()] == 0) {
                        min_pq.pop();
                    }
                    if (!min_pq.empty()) {
                        dict[min_pq.top()]--;
                        min_pq.pop();
                    }
                }
            }
        }
        while (!max_pq.empty() && dict[max_pq.top()] == 0) {max_pq.pop();}
        while (!min_pq.empty() && dict[min_pq.top()] == 0) {min_pq.pop();}
        if (max_pq.empty() || min_pq.empty()) cout << "EMPTY\n";
        else cout << max_pq.top() << " " << min_pq.top() << "\n";
        T--;
    }
}