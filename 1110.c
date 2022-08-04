#include <stdio.h>
int main() {
    int n, a, b, result, sum=0;
    scanf("%d", &n);
    result = n;
    while(1) {
        a = n;
        b = (a/10) + (a%10);
        n = (a%10)*10 + (b%10);
        sum++;
        if (n == result) break;
    }
    printf("%d", sum);
}