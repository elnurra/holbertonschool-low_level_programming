#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/

int print_last_digit(int n)
{
	int rem;

	rem = n % 10;

	if (rem < 0)
	rem *= -1;
	_putchar(rem + '0');

	return (rem);
}
