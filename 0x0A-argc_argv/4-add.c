#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - takes arguements from the terminal
 * @argc: the args
 * @argv: contains a string of each argument passed
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int j;

	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 2; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
