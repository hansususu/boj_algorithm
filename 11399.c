#include <stdio.h>

int main() {
    int n, arr[1001], sum = 0, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        res += sum;
    }
    printf("%d", res);
}