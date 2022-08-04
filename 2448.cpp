#include <iostream>
using namespace std;

const int MAX = 1024 * 3 + 2;
int n;
char board[MAX][MAX*2-1];

void star(int x, int y) {
    board[x][y] = '*';
    board[x+1][y-1] = '*';
    board[x+1][y+1] = '*';
    for (int i = y-2; i <= y+2; i++) {
        board[x+2][i] = '*';
    }
}

void recursion(int k, int x, int y) {
    if (k == 3) {
        star(x, y);
        return;
    }
    int s = k /2;
    recursion(s, x, y);
    recursion(s, x + s, y - s);
    recursion(s, x + s, y + s);
}

int main() {
    cin >> n;
    recursion(n, 0, n -1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2 - 1; j++) {
            if (board[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}