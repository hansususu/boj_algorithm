#include <stdio.h>

int main() {
    int n;
    char num[70];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", num);
        int len = strlen(num);
        if (num[len-1] % 2 == 0) printf("even\n");
        else printf("odd\n");
    }
}