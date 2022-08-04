#include <stdio.h>

int main() {
    int e, s, m;
    scanf("%d %d %d", &e, &s, &m);
    int E = 1, S = 1, M = 1;
    if (e == 1 && s == 1 && m == 1) printf("1");
    else {
        for (int a= 1; ; a++) {
            E++;
            S++;
            M++;
            if (E == 16) E = 1;
            if (S == 29) S = 1;
            if (M == 20) M = 1;
            if (e == E && s == S && m == M) {
                printf("%d", a+1);
                break;
            }
        }
    }
}