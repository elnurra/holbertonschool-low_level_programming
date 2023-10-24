#include "main.h"

/**
 * puts_half - prints a new string with secong half, followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, start, length_of_the_string;

	length_of_the_string = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		start = (length_of_the_string - 1) / 2;
		for (i = start + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length_of_the_string % 2 == 0)
	{
		start = length_of_the_string / 2;
		for (i = start; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
