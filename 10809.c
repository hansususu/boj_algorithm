#include <stdio.h>
#include <string.h>
int main() {
    char s[100] = {0};
    scanf("%s", s);
    for (int i = 97; i<=122; i++) {
        int j = 0;
        while (s[j] != 0) {
            if (s[j] == (char)i) break;
            j++;
        }
        if (s[j] == (char)i) printf("%d ", j);
        else printf("-1 ");
    }   

}