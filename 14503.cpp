#include <iostream>
#define MAX 50
using namespace std;

int n, m;
int visited_count;
int map[MAX][MAX];
int visited[MAX][MAX] = { 0 };

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int r, c, d;

void dfs() {
    for (int i = 0; i < 4; i++) {
        int n_d = (d + 3 -i) % 4;
        int n_r = r + dx[n_d];
        int n_c = c + dy[n_d];

         if (n_r < 0 || n_r >= n || n_c < 0 || n_c >= m || map[n_r][n_c] == 1) continue;

         if (map[n_r][n_c] == 0 && visited[n_r][n_c] == 0) {
             visited[n_r][n_c] = 1;
             r = n_r;
             c = n_c;
             d = n_d;
             visited_count++;
             dfs();
         }
    }

    int back_idx = d > 1 ? d- 2 : d + 2;
    int back_r = r + dx[back_idx];
    int back_c = c + dy[back_idx];

    if (back_r >= 0 && back_r <= n || back_c >= 0 || back_c <= m) {
        if (map[back_r][back_c] == 0) {
            r = back_r;
            c = back_c;
            dfs();
        }
        else {
            cout << visited_count << endl;
            exit(0);
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> r >> c >> d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }
    visited[r][c] = 1;
    visited_count++;

    dfs();
}