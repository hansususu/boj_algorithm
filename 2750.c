#include <stdio.h>

int main() {
    int n, tmp;
    int num[1024] = { 0, };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (num[i] < num[j]) {
                tmp = num[i];
                for (int k = i; k >= j; k--){
                    num[k] = num[k-1];
                }
                num[j] = tmp;
                break;
            }
        }
    }
    for (int i = 0; i< n; i++) printf("%d\n", num[i]);
    return 0;
}