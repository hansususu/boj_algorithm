#include <stdio.h>
int hansoo(int n);

int hansoo(int n) {
    int i, cnt=0;
    for (i= 1; i<n+1; i++) {
        if (0 <i && i< 100) cnt++;
        else if (i < 1000) {
            if( i/100 - (i%100)/10 == (i%100)/10 - ((i%100)%10) ) cnt++;
        }
    }
    return cnt;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", hansoo(n));
}