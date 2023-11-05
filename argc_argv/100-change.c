#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * divide_helper - Helper function to perform division
 * @cents: The amount of money to be divided
 *
 * Return: The minimum number of coins needed
 */
int divide_helper(int cents)
{
	int coins = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	return (coins);
}

/**
 * main - Calculates the minimum number of coins needed to make change
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = divide_helper(cents);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
