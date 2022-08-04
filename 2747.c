#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long arr[45] = {0, 1};

    for (int i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    printf("%ld", arr[n]);

    return 0;
}