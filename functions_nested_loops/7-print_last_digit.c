#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/

int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	n *= -1;

	rem = n % 10;
	_putchar(rem + '0');

	return (rem);
}
