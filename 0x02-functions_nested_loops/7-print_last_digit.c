#include "holberton.h"
/**
  * print_last_digit - Print last digit
  * Return: success (0)
  */

int print_last_digit(int n)
{
	int l = n % 10;
	if (l < 0){
		_putchar((l * -1) + '0');
	}else{
		_putchar(l + '0');
	}
	return (0);
}
