#include <stdio.h>
int main() {
	int a, b, t, i, j, pc;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		pc = 1;
		scanf("%d %d", &a, &b);
		for (j = 1; j <= b; j++) {
			pc = (pc * a) % 10;
		}
		if (pc == 0)
			pc = 10;
		printf("%d\n", pc);
    }
}