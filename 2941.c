#include <stdio.h>
#include <string.h>
int main() {
    char word[101];
    scanf("%s", word);
    int sum;
    sum = strlen(word);
    for (int i = 0; i < strlen(word); i++) {    
        if ((word[i] == 'c' || word[i] == 's' || word[i] == 'z') && (word[i+1]=='=' || word[i+1] == '-')) sum--;
        else if (word[i]=='d'){
            if (word[i+1] =='-') sum--;
            else if(word[i+1] == 'z' && word[i+2] == '=') sum--;
        }
        else if ((word[i] =='n' || word[i] =='l') && word[i+1] == 'j') sum--; 
    }
    printf("%d\n", sum);
}