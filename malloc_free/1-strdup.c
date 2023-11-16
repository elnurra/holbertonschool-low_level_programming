#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On error or if str is NULL, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return NULL;

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return NULL;

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return dup_str;
}

