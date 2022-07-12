#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 1, n = 0;
	scanf("%d", &n);
	for (q = 2; q <= n; q++)
	{
		if (q % 2)
		{
			w += q;
		}
		else
		{
			w -= q;
		}
	}
	printf("%d\n", w);
	return 0;
}