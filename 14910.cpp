#include <stdio.h>
using namespace std;

int main() {
    int n, next;
    scanf("%d", &n);
    while (scanf("%d", &next) != EOF) {
        if (n > next) {
            printf("Bad\n");
            return 0;
        }
        else n = next;
    }
    printf("Good\n");
}
