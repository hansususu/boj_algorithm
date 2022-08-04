#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int graph[102][102][102];
bool visited[102][102][102];
int dx[] = {0, 0, 1, -1, 0, 0};
int dy[] = {1, -1, 0, 0, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};
queue<tuple<int, int, int>> q;

int main() {
    int M, N, H;
    int day = 0, tomato = 0;
    cin >> M >> N >> H;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                cin >> graph[i][j][k];
                if (graph[i][j][k] == 0) tomato++;
                if (graph[i][j][k] == 1) {
                    q.push({i, j, k});
                    visited[i][j][k] = true;
                }
            } 
        }
    }
    if (tomato == 0) {
        cout << tomato;
        return 0;
    }
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int a = get<0>(q.front());
            int b = get<1>(q.front());
            int c = get<2>(q.front());

            q.pop();
            for (int j = 0; j < 6; j++) {
                int na = a + dx[j];
                int nb = b + dy[j];
                int nc = c + dz[j];
                if (na >= 0 && nb >= 0 && nc >= 0 && H > na && N > nb && M > nc && !visited[na][nb][nc] && graph[na][nb][nc] == 0) {
                    q.push({na, nb, nc});
                    visited[na][nb][nc] = visited[a][b][c]+1;
                    tomato--;
                }
            }
        }
        day++;
    }
    if (tomato > 0) {
        cout << -1;
    }
    else {
        cout << day -1;
    }
}