#include <stdio.h>

int main() {
    long a, b, c;
    while (1) {
        long n1, n2, n3;
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) return 0;
        n1 = a * a;
        n2 = b * b;
        n3 = c * c;
        if (n1 + n2 == n3 || n2 + n3 == n1 || n1+ n3 == n2) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}