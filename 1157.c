#include <stdio.h>
#include <string.h>
int main() {
    char word[1000001];
    int cnt[26] = {0, }, max = 0;
    char c = '?';
    scanf("%s", word);
    for (int i =0; word[i]!='\0'; i++) {
        if(word[i] >= 'a') word[i] -= 32;
        cnt[word[i] -65]++;
    }

    for (int i = 0; i <26; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            c=i;
        }
        else if (max == cnt[i]) c = '?';
    }
    if (c != '?') printf("%c", 65+c);
    else printf("?");
}