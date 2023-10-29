#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), carry = 0;
	int start = 0, i = len1 - 1, j = len2 - 1, k = 0, end;

	if (len1 + len2 > size_r - 1)
		return (0);
	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k++;
	}
	r[k] = '\0';
	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}
	return (r);
}
