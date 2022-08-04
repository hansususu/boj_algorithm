#include <stdio.h>

int fac(int num) {
    int res = 1;
    for (int i = 1; i<=num; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", fac(n) / (fac(k) * fac(n-k)));
}