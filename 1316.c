#include <stdio.h>
#include <string.h>
int main() {
    int n, sum;
    scanf("%d", &n);
    sum = n;
    for (int i = 0; i < n; i++) {
        char word[101];
        char first = '0';
        int alp[26] = {0, };
        scanf("%s", word);
        for (int j = 0; word[j] != '\0'; j++) {
            if (first != word[j]) {
                first = word[j];
                alp[word[j]-'a'] += 1;
            }
            if (alp[word[j]-'a'] == 2){
                sum -= 1;
                break;
            }
        }
    }
    printf("%d", sum);
}