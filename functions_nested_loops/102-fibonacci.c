#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 50;
	long F0 = 1;
	long F1 = 2;
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

