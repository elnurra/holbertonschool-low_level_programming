#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints the digits in.
 *
 * Return: Always 0.
*/

int main(void)
{
	int num1 = 0, num2 = 0;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 8 && num2 == 9)
			break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
