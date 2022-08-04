#include <stdio.h>

int main() {
    int a, b, arr[1001], cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < i; j++){
            if (cnt == 1000) break;
            arr[cnt] = i;
            cnt++;
        }
    }
    int res = 0;
    for (int i = a-1; i <b; i++){
        res += arr[i];
    }
    printf("%d\n", res);
}