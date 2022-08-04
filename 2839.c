#include <stdio.h>
int main() {
    int input, cnt = 0;
    scanf("%d", &input);
    
    while (1) {
        if (input % 5 == 0) {
            cnt += input/5;
            printf("%d", cnt);
            break;
        }
        input -= 3;
        cnt++;
        if (input < 0) {
            printf("-1");
            break;
        }
    }
    return 0;
}