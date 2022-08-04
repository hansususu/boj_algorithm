#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i< t; i++){
        char word[21];
        int r;
        scanf("%d %s", &r, word);
        for (int j = 0; j < strlen(word); j++) {
            for (int k = 0; k <r; k++) printf("%c", word[j]);
        }
        printf("\n");
    }
}