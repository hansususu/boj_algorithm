#include <stdio.h>

int main() {
    int day, car, cnt =0;
    scanf("%d", &day);
    for(int i = 0; i< 5; i++) {
        scanf("%d", &car);
        if (day == car) cnt++;
    }
    printf("%d", cnt);
}