#include <stdio.h>
/**
 * main: prints code
 * Return: always: 0
*/


int main(void)
{
	int n = 50;
	long F0 = 1;
	long F1 = 1;
	long Fn;
	int i;

	printf("%ld, %ld", F0, F1);

	for (i = 2; i < n; i++)
	{
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;

		printf(", %ld", Fn);
	}

	printf("\n");
	return (0);
}

