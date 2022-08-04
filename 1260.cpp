#include <iostream>
#include <queue>
using namespace std;

int arr[1001][1001];
int visited[1001];
int n, m, v;
queue<int> q;

void dfs(int idx) {
    cout << idx << ' ';
    for (int i = 1; i <= n; i++) {
        if (arr[idx][i] && !visited[i]) {
            visited[i] = 1;
            dfs(i);
        }
    }
}

void bfs(int idx) {
    q.push(idx);
    while (!q.empty()) {
        idx = q.front();
        q.pop();
        cout << idx << ' ';
        for (int i = 1; i <= n; i++) {
            if (arr[idx][i] && !visited[i]) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
        arr[to][from] = 1;
    }
    visited[v] = 1;
    dfs(v);
    cout << '\n';
    fill_n(visited, 1001, 0);
    visited[v] = 1;
    bfs(v);
}