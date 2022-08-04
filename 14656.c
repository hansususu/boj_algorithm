#include <stdio.h>

int main() {
    int n, num, cnt=0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) {
        scanf("%d", &num);
        if (i != num) cnt++;
    }
    printf("%d", cnt);
    return 0;
}