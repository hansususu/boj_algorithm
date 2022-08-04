#include <stdio.h>

int main() {
    int n, l, h[10001];
    scanf("%d %d", &n, &l);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n-1; j++) {
            if (h[j] > h[j+1]) {
                int tmp = h[j];
                h[j] = h[j+1];
                h[j+1] = tmp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (h[i] <= l) l+=1;
    }
    printf("%d", l);
}