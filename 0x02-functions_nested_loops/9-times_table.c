#include "holberton.h"
/**
  * times_table - Prints the 9 times table
  * Return: success (0)
  */

void times_table(void)
{
	int v, h, t;

	for (v = 0; v <= 9; v++)
	{
		for (h = 0; h <= 9; h++)
		{
			t = v * h;
			if (h != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (t < 10)
			{
				_putchar(' ');
			}
			else
			{

				 _putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
