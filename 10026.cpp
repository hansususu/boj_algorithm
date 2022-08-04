#include <iostream>
using namespace std;

int n;
string map[101];
int visit[101][101];

int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if (visit[nx][ny] == 0 && map[nx][ny] == map[x][y]) {
            visit[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visit[i][j] == 0) {
                cnt++;
                visit[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    cout << cnt << " ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++ ){
            if (map[i][j] == 'G') map[i][j] = 'R';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visit[i][j] = 0;
        }
    }

    int cnt_ab = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visit[i][j] == 0) {
                cnt_ab++;
                visit[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    cout << cnt_ab;
}