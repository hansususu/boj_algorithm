#include <stdio.h>

int main() {
    int s= 64, n, cnt = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (s > n) s/=2;
        else {
            cnt++;
            n -= s;
        }
    }
    printf("%d", cnt);
}