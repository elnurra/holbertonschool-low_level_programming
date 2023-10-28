#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be modified
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}

	return (str);
}
