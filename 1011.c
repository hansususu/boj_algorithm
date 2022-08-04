#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);
        int dis = y -x;
        int index = 0;
        long int max = 0;
        while (max < dis) {
            max += index/2 + 1;
            index++;
        }
        printf("%d\n", index);
    }
    return 0;
}