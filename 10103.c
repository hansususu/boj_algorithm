#include <stdio.h>

int main() {
    int n, a, b, scorea = 100, scoreb = 100;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a > b) scoreb -= a;
        else if (a < b) scorea -= b;
    }
    printf("%d\n%d", scorea, scoreb);
}