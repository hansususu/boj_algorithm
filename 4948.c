#include <stdio.h>

int main() {
    int n, cnt=0;
    int arr[246913] = {0, };

    arr[0] = 1, arr[1] = 1;
    for (int j = 2; j < 246913 /j; j++) {
        if (arr[j] == 1) continue;
        for (int i = j * j; i < 246913; i += j) if (i % j == 0) arr[i] = 1;
    }
    scanf("%d", &n);

    while (n != 0) {
        cnt = 0;
        for (int i = n +1; i <= n * 2; i++) {
            if (arr[i] == 0) cnt++;
        }
        printf("%d\n", cnt);
        scanf("%d", &n);
    }
    return 0; 
}