#include <iostream>
#include <algorithm>
#define MAX 987654321
using namespace std;

int n, m, x, a, b, c;
int arr[1010][1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m >> x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = MAX;
        }
        arr[i][i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        arr[a][b] = c;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res = max(res, arr[i][x] + arr[x][i]);
    }
    cout << res;
}