#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b) {
        long long tmp = a;
        a = b;
        b = tmp;
    }
    if (a != b) {
        printf("%lld\n", b-a-1);
        for (long long i = a+1 ; i<b; i++){
        printf("%lld ", i);
        }
    }
    else printf("0\n");
}