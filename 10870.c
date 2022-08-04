#include <stdio.h>

int fibo(int num){
    if (num >= 2) return fibo(num-1)+fibo(num-2);
    else if (num == 1) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}