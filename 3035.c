#include <stdio.h>
#include <string.h>

int main(){
    int r, c, zr, zc;
    scanf("%d %d %d %d", &r, &c, &zr, &zc);
    char arr[51][51];
    for (int i = 0; i < r; i++){
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < zr; j++) {
            for (int k = 0; k < c; k++) {
                for (int l = 0; l < zc; l++) printf("%c", arr[i][k]);
            }
            printf("\n");
        }
    }
}