#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char arr[1000];
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr)-1]);
    }
}