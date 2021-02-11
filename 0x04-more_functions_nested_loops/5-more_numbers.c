 #include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: 0 or 1
*/

void more_numbers(void)
{
	int i;
	int f;

	for (i = 0; i < 10; i++)
	{
		for (f = 0; f < 15; f++)
		{
			if (f >= 10)
			{
				_putchar(f / 10 + '0');
			}
			_putchar(f % 10 + '0');
		}
		_putchar('\n');

	}
}
