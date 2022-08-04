#include <stdio.h>

int main() {
    int a, b, c, max = 0, res = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c && a==c) res = 10000 + a* 1000;
    else if (a == b || a == c) res = 1000 + a * 100;
    else if (b == c) res = 1000 + b * 100;
    else {
        if (a > b && a > c) max = a;
        else if (b > a && b > c) max = b;
        else if (c > a && c > b) max = c;
        res = max * 100;
    }
    printf("%d" ,res);
}