#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double a[1000], max = 0, avg = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
        if (max < a[i]) max = a[i];
    }
    for (int i = 0; i< n; i++) {
        a[i] = a[i]/max*100.0;
        avg += a[i];
    }
    printf("%.2lf", (avg/(double)n));
}