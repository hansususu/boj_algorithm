#include <iostream>
#include <queue>
using namespace std;

int dy[4] = {0, 0, -1, 1};
int dx[4] = {1, -1, 0, 0};
int n, arr[130][130], dist[130][130];

void bfs() {
    queue<pair<int, int>> q;
    q.push(make_pair(0,0));
    dist[0][0] = arr[0][0];

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (ny >= 0 && ny < n && nx >= 0 && nx < n) {
                if (dist[ny][nx] > dist[y][x] + arr[ny][nx]) {
                    dist[ny][nx] = dist[y][x] + arr[ny][nx];
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }
}

int main() {
    int cnt = 1;
    while (1) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                dist[i][j] = 200000000;
            }
        }
        bfs();
        cout << "Problem " << cnt++ << ": " << dist[n-1][n-1] << '\n';
    }
}