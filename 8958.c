#include <stdio.h>
#include <string.h>

int main() {
    int n, score, sum;
    char arr[80];
    scanf("%d", &n);
    for (int i = 0; i< n; i++) {
        sum = 0;
        score = 1;
        scanf("%s", arr);
        for (int j = 0; j < strlen(arr); j++) {
            if (arr[j] == 'O'){
                sum += score;
                score++;
            }
            if (arr[j] == 'X') score = 1;
        }
        printf("%d\n", sum);
    }

}