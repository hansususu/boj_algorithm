#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    char tmp;

    for (int i = 0; i < strlen(str) * (0.5); i++) {
        tmp = str[i];
        str[i] = str[strlen(str) - i -1];
        str[strlen(str) - i -1] = tmp;
    }
}

int main() {
    char a[10005] = { 0 };
    char b[10005] = { 0 };
    char res[10005] = { 0 };
    int sum;
    int carry = 0;

    scanf("%s %s", a, b);
    reverse(a);
    reverse(b);

    int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

    for (int i = 0; i < len; i++) {
        sum = a[i] - '0' + b[i] -'0' + carry;

        while (sum < 0) sum+= '0';
        if (sum >= 10) carry= 1;
        else carry = 0;
        res[i] = sum % 10 + '0';
    }
    if (carry == 1) res[len] = '1';

    reverse(res);
    printf("%s", res);
}