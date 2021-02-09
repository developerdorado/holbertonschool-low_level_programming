#include "holberton.h"
/**
* _islower - Function that checks for lowercase characte
* @c: char
* Return: success (0)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
