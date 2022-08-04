#include <stdio.h>

int main() {
    int num, total = 0;
    for (int i = 0; i< 5; i++) {
        scanf("%d", &num);
        total += num * num;
    }
    printf("%d", total%10);
}