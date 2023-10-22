#include <stdio.h>
#include "main.h"

/**
 * main - Computes and prints the sum of multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */

int print_to_sum(void)
{
	int sum = 0;
	int number;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);
	return (0);
}

