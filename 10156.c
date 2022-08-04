#include <stdio.h>

int main() {
    int k, n, m;
    scanf("%d %d %d", &k, &n, &m);
    int res = k * n - m;
    if (res > 0) printf("%d", res);
    else printf("0");
}