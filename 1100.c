#include <stdio.h>

int main() {
    char arr[8][8];
    int cnt=0;
    for (int i = 0; i< 8; i++) {
        for (int j = 0; j < 8; j++){
            scanf(" %c", &arr[i][j]);
        }
        "\n";
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i+j) % 2 ==0 && arr[i][j] == 'F') cnt++; 
        }
    }
    printf("%d\n", cnt);
    return 0;
}