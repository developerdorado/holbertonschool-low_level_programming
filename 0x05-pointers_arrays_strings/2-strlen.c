#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: String
 * Return: Sizeof of a string
*/

int _strlen(char *s)
{
	int c;

	for (*s != '\0'; *s++)
	{
		c++;
	}

	return (c);
}
