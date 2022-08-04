#include <stdio.h>

int main() {
    int s, cnt = 0;
    scanf("%d", &s);
    char arr[s];
    scanf("%s", arr);
    for (int i = 0 ; i<s; i++) {
        if (arr[i] == '2') cnt++;
        else if (arr[i] == 'e') cnt--;
    }
    if (cnt > 0) printf("2");
    else if (cnt < 0) printf("e");
    else printf("yee");
}