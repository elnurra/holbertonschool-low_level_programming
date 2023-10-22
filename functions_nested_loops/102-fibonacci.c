#include <stdio.h>
/**
 * main: prints code
 * Return: always: 0
*/


int main(void)
{
	int n = 50;
	long long F0 = 1;
	long long F1 = 1;
	long long Fn;

	printf("%lld, %lld", F0, F1);

	for (int i = 2; i < n; i++)
	{
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;

		printf(", %lld", Fn);
	}

	printf("\n");
	return (0);
}

