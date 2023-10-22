#include "main.h"
/**
 * more_numbers - prints from 0 to 14 in 10 times
 *
*/

void more_numbers(void)
{
	int i, j, k, doubleDigit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				for (k = 0; k < 2; k++)
				{
					if (k == 0)
						doubleDigit = j / 10;
					else
						doubleDigit = j % 10;
					_putchar(doubleDigit + '0');
				}
			}
		}
		_putchar('\n');
	}
}
