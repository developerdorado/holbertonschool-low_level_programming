#include "holberton.h"
/**
  * print_alphabet - Print the alphabet
  * Return: success (0)
  */

 void print_alphabet(void)
{
	char i = 'a';
	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
