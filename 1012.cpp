#include <iostream>
#include <cstring>
using namespace std;

int M, N, K;
int map[51][51];
int visited[51][51];
int dy[] = {0, 0, -1, 1};
int dx[] = {-1, 1, 0, 0};

void DFS(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (map[nx][ny] == 1) {
                if (!visited[nx][ny]) DFS(nx, ny);
            } 
        }
        else continue;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        int cnt = 0;
        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (map[i][j] == 1) {
                    if (!visited[i][j]) {
                        cnt++;
                        DFS(i, j);
                    }
                }
            }
        }
        cout << cnt << '\n';
        memset(visited, false, sizeof(visited));
        memset(map, 0, sizeof(map));
    }
}