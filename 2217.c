#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second){
    if (*(int*)first < *(int*)second) return -1;
    else if (*(int*)first > *(int*)second) return 1;
    else return 0;
}

int main() {
    int n, w[100001], max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }
    qsort(w, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        if (max < w[i] * (n-i)) max = w[i] * (n-i);
    }
    printf("%d", max);
}