#include <stdio.h>

int main() {
    int n, k = 2, sum = 3;
    scanf("%d", &n);
    for (int i = 1; i< n; i++) {
        sum += k;
        k *= 2;
    }
    printf("%d", sum*sum);
}