#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    int cnt = 0;
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char arr[10];
        scanf("%s", arr);
        if (strstr(arr, s) != NULL) cnt++;
    }
    printf("%d", cnt);
}