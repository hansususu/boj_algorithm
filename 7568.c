#include <stdio.h>

int main() {
    int n, arr1[50], arr2[50];
    scanf("%d", &n);
    for (int i = 0; i <n; i++) {
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j < n; j++) {
            if (arr1[i] < arr1[j] && arr2[i] < arr2[j]) k++;
        }
        printf("%d ", k+1);
    }
}