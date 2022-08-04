#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[20];
        int sum = 0, parking;
        int min = 100, max = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
            if (min > arr[j]) min = arr[j];
            if (max < arr[j]) max = arr[j];
        }
        parking = sum / n;
        int res = 2 * (max - parking) + 2*(parking - min);
        printf("%d\n", res);
    }
}