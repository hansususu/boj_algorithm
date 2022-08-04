#include <stdio.h>

int main() {
    int n, k, arr[1000], cnt = 0;
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++){
        arr[i] = i;
    }
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) continue;
        else {
            for (int j = i; j <= n; j += i) {
                if (arr[j] != 0) {
                    arr[j] = 0;
                    cnt++;
                }
                if (cnt == k) {
                    printf("%d", j);
                    break;
                }
            }
        }
    }
}