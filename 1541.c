#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    int arr[25] = { 0 };
    scanf("%s", str);
    int len = strlen(str);
    int j = 0, k = 0, tmp = 0, sum = 0, res = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] == '-' || i == len){
            sum += tmp;
            arr[j] = sum;
            j++;
            tmp = 0;
            sum = 0;
        }
        else if (str[i] == '+') {
            sum += tmp;
            tmp = 0;
        }
        else {
            tmp *= 10;
            tmp = tmp + str[i] - '0';
        }
    }
    res = arr[0];
    for (int i = 1; i < j; i++) {
        res -= arr[i];
    }
    printf("%d", res);
}