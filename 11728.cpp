#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[1000001], b[1000001];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i= 0, j = 0;
    while (i + j < n +m) {
        if (i == n) cout << b[j++] << ' ';
        else if (j == m) cout << a[i++] << ' ';
        else {
            if (a[i] > b[j]) cout << b[j++] << ' ';
            else cout << a[i++] << ' ';
        }
    }
    return 0;
}