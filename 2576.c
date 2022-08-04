#include <stdio.h>

int main() {
    int n, min = 100, add = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &n);
        if (n % 2 == 1) {
            if (min > n) min = n;
            add += n;
        }
    }
    if (add == 0) printf("-1");
    else printf("%d\n%d", add, min);
}