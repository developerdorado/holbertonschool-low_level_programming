#include "holberton.h"

/**
 * print_rev - Function that prints a string, in reverse
 * followed by a new line.
 * @s: string
 */

void print_rev(char *s)
{
	int i, f;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (f = i; f >= 0; f--)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}
