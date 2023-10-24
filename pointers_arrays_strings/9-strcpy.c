#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: first param is a pointer to the buffer in which we copy the string
 * @src: second param is a string to be copied
 * Return: the pointer to dest (array)
 */


char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
