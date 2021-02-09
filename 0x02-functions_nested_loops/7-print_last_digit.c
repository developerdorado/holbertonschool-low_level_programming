#include "holberton.h"
/**
  * print_last_digit - Print last digit
  * @n: number
  * Return: success (0)
  */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (0);
}
