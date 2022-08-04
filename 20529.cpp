#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        char arr[n][4];
        int ans = 999999;
        for (int i = 0; i < n; i++) {
            scanf("%s", arr[i]);
        }
        if (n > 32) {
            printf("0");
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        int tmp = 0;
                        if (i == j || j == k || i == k) continue;
                        for (int l = 0; l < 4; l++) {
                            if (arr[i][l] != arr[j][l]) tmp += 1;
                            if (arr[j][l] != arr[k][l]) tmp += 1;
                            if (arr[i][l] != arr[k][l]) tmp += 1;
                        }
                        ans = min(tmp, ans);
                    }
                }
            }
            cout << ans << '\n';
        }
    }
}