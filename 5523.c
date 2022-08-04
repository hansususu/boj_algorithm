#include <stdio.h>

int main() {
    long long n;
    int a, b, scorea = 0, scoreb = 0;
    scanf("%d", &n);
    for (long long i  = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a > b) scorea++;
        else if (a < b) scoreb++;
    }
    printf("%d %d", scorea, scoreb);
}