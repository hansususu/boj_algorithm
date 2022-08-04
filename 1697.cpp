#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isCheck[100010];

int main() {
    int t, n, m, k;
    int x, y;
    int ans = 0;

    cin >> n >> k;
    queue<pair<int, int>> q;
    q.emplace(n, 0);

    while (!q.empty()) {
        int locate = q.front().first;
        int cost = q.front().second;
        q.pop();

        if (locate == k) {
            ans = cost;
            break;
        }
        int x_1 = locate-1;
        int x_2 = locate+1;
        int x_3 = locate*2;

        if (x_1 >= 0 && !isCheck[x_1]) {
            isCheck[x_1] = true;
            q.emplace(x_1, cost + 1);
        }
        if (x_2 < 100001 && !isCheck[x_2]) {
            isCheck[x_2] = true;
            q.emplace(x_2, cost+1);
        }
        if (x_3 < 100001 && !isCheck[x_3]) {
            isCheck[x_3] = true;
            q.emplace(x_3, cost+1);
        }
    }
    cout << ans << endl;
}