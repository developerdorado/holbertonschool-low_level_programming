 #include "holberton.h"

/**
* print_line - Function that draws a straight line in the terminal.
* followed by a new line
* @n: number
* Return: 0 or 1
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(45);

		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
