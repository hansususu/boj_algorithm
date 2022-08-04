#include <iostream>
using namespace std;

int arr[20][20];
int n;

void dfs(int a, int b, int d) {
    arr[a][b]++;

    if (d == 0 || d == 2) {
        if (b < n && arr[a][b+1] != -1) {
            dfs(a, b+1, 0);
        }
    }
    if (d == 1 || d == 2) {
        if (a < n && arr[a+1][b] != -1) {
            dfs(a+1, b, 1);
        }
    }
    if (a <n && b < n && arr[a][b+1] != -1 && arr[a+1][b] != -1 && arr[a+1][b+1] != -1) {
        dfs(a+1, b+1, 2);
    }
    return;
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) arr[i][j] = -1;
        }
    }
    dfs(1, 2, 0);
    if (arr[n][n] == -1) arr[n][n] = 0;
    cout << arr[n][n];
}