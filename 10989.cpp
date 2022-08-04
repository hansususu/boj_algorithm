#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int input[10001] = { 0 };
    for (int i = 0; i < n; i++) {
        int in;
        scanf("%d", &in);
        input[in] += 1;
    }
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < input[i]; j++){
            printf("%d\n", i);
        }
    }
}