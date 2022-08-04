#include <stdio.h>

int main() {
    int num, avg=0;
    for (int i = 0; i< 5; i++) {
        scanf("%d", &num);
        if (num > 40) avg+= num;
        else avg += 40;
    }
    printf("%d", avg/5);
    return 0;
}