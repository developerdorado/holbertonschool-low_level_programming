 #include "holberton.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: 0 or 1
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
