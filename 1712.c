#include <stdio.h>
#include <string.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int evp = 1;
    if (b >= c) {
        printf("-1");
        return 0;
    }
    evp = a/(c-b) + 1;
    printf("%d", evp);
    return 0;
}