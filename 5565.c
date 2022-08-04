#include <stdio.h>

int main() {
    int sum, book;
    scanf("%d", &sum);
    for (int i = 0; i < 9; i++) {
        scanf("%d", &book);
        sum -= book;
    }
    printf("%d", sum);
}