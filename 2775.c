#include <stdio.h>
int main() {
    int T, k, n;
    int arr[15][15] = { 0 };
    for (int i = 0; i< 15; i++) {
        arr[0][i] = i;
    }
    for (int i = 0; i< 15; i++) {
        arr[i][1] = 1;
    }

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%d", &k);
        scanf("%d", &n);
        for (int j = 1; j <= k; j++) {
            for (int x = 1; x <= n; x++) {
                arr[j][x] = arr[j][x-1] + arr[j-1][x];
            }
        }
        printf("%d \n", arr[k][n]);
    }
    return 0;
}