#include <stdio.h>

int main() {
    int r, kim, lim, cnt = 0;
    scanf("%d %d %d", &r, &kim, &lim);
    while (kim != lim) {
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        cnt++;
    }    
    printf("%d", cnt);
}