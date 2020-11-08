#define _CRT_SECURE_NO_WARNIGS
#include<stdio.h>
int main()
{
	int many, high[100], y, i, j, k, a = 1, b, m, n;
	printf("enter number : ");
	scanf("%d", &many);
	for (k = 0; k < many; k++)
	{
		printf("ENTER PYRAMID HIGH : ");
		scanf("%d", &high[k]);
		b = high[k] - 1;
		a = 1;
		for (i = 1; i <= high[k]; i++)
		{
			for (m = 1; m <= b; m++)
			{
				printf(".");
			}

			for (n = 1; n <= a; n++)
			{
				printf("#");
			}
			a = a + 2;
			for (m = 1; m <= b; m++)
			{
				printf(".");
			}
			b = b - 1;
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}