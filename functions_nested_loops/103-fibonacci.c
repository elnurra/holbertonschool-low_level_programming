#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 31;
	long F0 = 1;
	long F1 = 2;
	long Fn;
	int i;
	long result = 2;

	for (i = 0; i < n; i++)
	{
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;
		if (Fn <= 4000000)
		{
			if (Fn % 2 == 0)
			{
				result += Fn;
			}
		}
	}
	printf("%ld\n", result);
	return (0);
}
