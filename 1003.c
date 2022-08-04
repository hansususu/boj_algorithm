#include <stdio.h>
int main() {
    int T, n, fibo[41][2];
    scanf("%d", &T);
    fibo[0][0] = 1;
    fibo[0][1] = 0;

    fibo[1][0] = 0;
    fibo[1][1] = 1;

    for (int i = 2; i <= 40; i++) {
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }

    while(T--) {
        scanf("%d", &n);
        printf("%d %d\n", fibo[n][0], fibo[n][1]);
    }
    return 0;
}