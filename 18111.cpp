#include <iostream>
using namespace std;

int main() {
    int board[502][502];
    int n, m, b;
    int mintime = 1e9, maxheight = -1;
    cin >> n >> m >> b; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int height = 0; height <= 256; height++) {
        int inven = 0, remove = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int curheight = board[i][j] - height;
                if (curheight < 0) inven -= curheight;
                else remove += curheight;
            }
        }
        if (remove + b >= inven) {
            int t = 2 * remove + inven;
            if (mintime >= t) {
                mintime = t;
                maxheight = height;
            }
        }
    }
    cout << mintime << " " << maxheight;
    return 0;
}