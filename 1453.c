#include <stdio.h>

int main() {
    int n, arr[100] = { 0 }, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i< n; i++) {
        int a;
        scanf("%d", &a);
        if (arr[a] == 1) cnt++;
        arr[a] = 1;
    }
    printf("%d", cnt);
}