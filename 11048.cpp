#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1001
int n, m;
int arr[MAX][MAX] = { 0 };
int copy_arr[MAX][MAX];

int dp() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int comp = 0;
            comp = max(copy_arr[i-1][j-1], max(copy_arr[i-1][j], copy_arr[i][j-1]));
            copy_arr[i][j] = comp+arr[i][j];
        }
    }
    return copy_arr[n][m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> arr[i][j];
    }
    cout << dp() <<endl;
}