#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'e'; letter++)
		putchar(letter);
	for (letter = 'q'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
