#include <stdio.h>

/**
 * main - Entry point
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
