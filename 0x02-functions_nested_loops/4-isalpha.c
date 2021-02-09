#include "holberton.h"
/**
* _isalpha - Function that checks for alphabetic character
* @c: char
* Return: success (0)
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
