#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int foundDigit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			foundDigit = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (foundDigit)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

