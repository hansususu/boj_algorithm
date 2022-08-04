#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int map[102][102];
bool visited[102][102];
int dy[] = {0, 0, -1, 1};
int dx[] = {1, -1, 0, 0};
queue<pair<int, int>> q;
vector<int> v;
int area = 1;

void bfs(int y, int x) {
    visited[y][x] = true;
    q.push(make_pair(y, x));

    while (!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny > n || nx > m) continue;
            if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
                visited[ny][nx] = true;
                q.push(make_pair(ny,nx));
                area++;
            }
        }
    }
}

bool compare(int i, int j) {
    return i > j;
}

int main() {
    cin >> n >> m >> k;
    while (k--) {
        int r, c;
        cin >> r >> c;
        map[r][c] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] == 1 && visited[i][j] == 0) {
                bfs(i, j);
                v.push_back(area);
                area = 1;
            }
        }
    }
    sort(v.begin(), v.end(), compare);
    cout << v[0];
}