#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%i\n", a * b);
		return (0);
	}
}
