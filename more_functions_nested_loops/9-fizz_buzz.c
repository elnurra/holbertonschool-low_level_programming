#include <stdio.h>

/**
 * main - Prints 1 to 100
 *
 * Multiples of 3 prints Fizz
 * Miltiples of 5 print Buzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);

	}

	printf("\n");
	return (0);
}
