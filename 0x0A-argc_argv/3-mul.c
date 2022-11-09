#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - takes arguements from the terminal
 * @argc: the args
 * @argv: contains a string of each argument passed
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int product;

	product = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			product *= atoi(argv[i]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
