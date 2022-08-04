#include <stdio.h>

int main() {
    int T, n;
    int arr[20000] = {0, 1};
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);

        for (int j = 2; j <= n; j++) {
            for (int k = 2; k * j <= n; k++){
                arr[j*k] = 1;
            }
        }
        for (int m = n/2; m >0; m--) {
            if (arr[m] != 1 && arr[n-m] != 1) {
                printf("%d %d\n", m, n-m);
                break;
            }
        }
    }
    return 0;
}