#include <iostream>
#include <cstring>
using namespace std;

int map[129][129];
int w_cnt = 0, b_cnt = 0;

void solve(int x, int y, int n) {
    int tmp_cnt = 0;
    for (int i = x; i < x + n; i++) {
        for (int j = y; j < y +n; j++) {
            if (map[i][j]) tmp_cnt++;
        }
    }
    if (!tmp_cnt) w_cnt++;
    else if(tmp_cnt == n* n) b_cnt++;
    else {
        solve(x, y, n/2);
        solve(x, y + n/2, n /2);
        solve(x+n/2, y, n/2);
        solve(x+n/2, y+n/2, n/2);
    }
    return;
}

int main() {
    int n;
    memset(map, 0, sizeof(map));
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    solve(0, 0, n);
    cout << w_cnt << '\n' << b_cnt;
}