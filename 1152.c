#include <stdio.h>
#include <string.h>
int main() {
    char word[1000001];
    int i, cnt = 0, len;
    scanf("%[^\n]", word);
    len = strlen(word);
    if (len == 1) {
        if (word[i] == ' ') {
            printf("0\n");
            return 0;
        }
    }
    for (int i = 1; i<len-1; i++) {
        if (word[i] == ' ') cnt++;
    }
    printf("%d", cnt+1);
    return 0; 
}