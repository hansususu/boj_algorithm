#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        for (int j = 0; j<a; j++){
            printf("=");
        }
        printf("\n");
    }
}