#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    int numa[100];
    int numb[100];
    numa[0] = 1;
    numb[0] = 0;
    for (int i = 1; i<=50; i++) {
        numa[i] = numb[i-1];
        numb[i] = numa[i-1] + numb[i-1];
    }
    printf("%d %d", numa[k], numb[k]);
    return 0;
}