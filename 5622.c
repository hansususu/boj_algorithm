#include <stdio.h>
#include <string.h>
int alp(int n);
int main() {
    char arr[15];
    int sum = 0;
    scanf("%s", arr);
    for (int i = 0; i<='Z'; i++) {
        for (int j = 0; j <strlen(arr); j++) {
            if (i == arr[j]) sum+= alp(i);
        }
    }
    sum += strlen(arr);
    printf("%d", sum);
}

int alp(int n){
    switch(n){
        case 'A':
        case 'B':
        case 'C':
            return 2;
        case 'D':
        case 'E':
        case 'F':
            return 3;
        case 'G':
        case 'H':
        case 'I':
            return 4;
        case 'J':
        case 'K':
        case 'L':
            return 5;
        case 'M':
        case 'N':
        case 'O':
            return 6;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 7;
        case 'T':
        case 'U':
        case 'V':
            return 8;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return 9;
    }

}