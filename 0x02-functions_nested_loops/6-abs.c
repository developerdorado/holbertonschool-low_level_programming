#include "holberton.h"
/**
  * _abs - Function that computes the absolute value of an integer.
  * @n: number
  * Return: success (0)
  */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
