 #include "holberton.h"

/**
* print_square -  Function that prints a square, followed by a new line.
* @size: number
* Return: 0 or 1
*/

void print_square(int size)
{
	int h;
	int v;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (v = 0; v < size; v++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
