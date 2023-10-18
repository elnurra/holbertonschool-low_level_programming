#include "main.h"

/**
 * print_alphabet - function that print alphabet
 *
 * Return: no return
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
