#include <stdio.h>
int main() {
    int c;
    scanf("%d", &c);
    for (int i = 0; i< c; i++) {
        int num, arr[1001], sum = 0;
        double avg;
        scanf("%d", &num);
        for (int j = 0; j < num; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        avg = (double)sum / num;
        int count = 0;
        for (int j = 0; j < num; j++){
            if (avg < arr[j]) count++;
        }
        printf("%.3f%%\n", (double)count * 100/num);
    }
}