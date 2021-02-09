#include "holberton.h"
/**
* print_alphabet_x10 - Print the alphabet x 10
* Return: success (0)
*/

void print_alphabet_x10(void)
{
	char i;
	int x = 0;

	for (; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
