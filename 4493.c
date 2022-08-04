#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n, scorea = 0, scoreb = 0;
        scanf(" %d", &n);
        for (int j = 0; j < n; j++) {
            char a, b;
            scanf(" %c %c", &a, &b);
            if (a == 'R') {
                if (b == 'R'){
                    scorea++;
                    scoreb++;
                }
                else if (b == 'P') scoreb++;
                if (b == 'S') scorea++;
            }
            else if(a == 'P') {
                if (b == 'R') scorea++;
                else if(b == 'P') {
                    scorea++;
                    scoreb++;
                }
                if (b == 'S') scoreb++;
            }
            else if (a == 'S') {
                if (b == 'R') scoreb++;
                else if (b == 'P') scorea++;
                if (b == 'S') {
                    scorea++;
                    scoreb++;
                }
            }
        }
        if (scorea > scoreb) printf("Player 1\n");
        else if (scorea < scoreb) printf("Player 2\n");
        else printf("TIE\n");
    }
}