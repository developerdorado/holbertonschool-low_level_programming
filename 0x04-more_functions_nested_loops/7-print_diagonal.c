 #include "holberton.h"

/**
* print_diagonal - Function that draws a diagonal line on the terminal.
* @n: number
* Return: 0 or 1
*/

void print_diagonal(int n)
{
	int i;
	int f;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\n');
			for (f = 0; f < i; f++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
}
