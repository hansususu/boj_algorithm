#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum, sum1, cnt;
    char arr[30];
    scanf("%d", &n);
    for (int i  = 0; i < n; i++) {
        scanf("%s", arr);
        sum = (arr[0] - 'A') * 26 * 26 + (arr[1] - 'A') * 26 + (arr[2] - 'A');
        sum1 = (arr[4] - 48) * 1000 + (arr[5] - 48) * 100 + (arr[6] - 48) * 10 + (arr[7] - 48);
        if (abs(sum - sum1) <= 100) printf("nice\n");
        else printf("not nice\n"); 
    }
}