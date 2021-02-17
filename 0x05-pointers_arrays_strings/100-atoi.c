#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Function that convert a string to an integer.
 * @s: String
 * Return: Always 0.
 */

int _atoi(char *s)
{
	unsigned int i, n;
	int x;

	n = 0;
	x = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (s[i] - '0') + n * 10;
			if (s[i + 1] == ' ')
			{
				break;
			}
			else if
				(s[i] == '-')
				{
					x = x * -1;
				}
		}
	}
	return (n * x);
}
