#include <stdio.h>
int main(){
    int a[10], max = 0, n;
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) {
            max = a[i];
            n = i;
        }
    }
    printf("%d\n%d", max, n);
}