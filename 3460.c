#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int num[100000] = { 0 };
        int i = 0;
        while (n >= 1) {
            num[i] = n %2;
            n = n /2;

            i++;
        }
        if (n == 1) num[i] = 1;

        for (int j = 0; j <=i; j++) {
            if (num[j] == 1) {
                printf("%d", j);
            }
        }
    }   
}