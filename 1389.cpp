#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int arr[102][102];
    int a, b;

    cin >> n >> m;
    
    for (int i = 1; i <= 101; i++) {
        for (int j = 1; j <= 101; j++) {
            if (i == j) arr[i][j] == 0;
            else arr[i][j] = 987654321;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    int minn = 987654321;
    int tmp = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            sum += arr[i][j];
        }
        if (minn > sum) {
            minn = sum;
            tmp = i;
        }
    }
    cout << tmp;
}