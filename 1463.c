#include <stdio.h>

int dp[1000001];

int min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	int num, i;
	scanf("%d", &num);
	dp[1] = 0;

	for (i = 2; i <= num; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	printf("%d", dp[num]);

	return 0;
}