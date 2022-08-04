#include <iostream>
using namespace std;

bool map[1001][1001];
bool check[1001];
int n, m, res;

void dfs(int num) {
    check[num] = true;
    for (int i = 1; i<= n; i++) {
        if (map[num][i] && !check[i]) {
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = true;
        map[b][a] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!check[i]){
            res++;
            dfs(i);
        }
    }
    cout << res;
}