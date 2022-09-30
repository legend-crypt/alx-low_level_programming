#include <stdio.h>

/**
 * main - takes arguements from the terminal
 * @argc: the args
 * @:argv: contains a string of each argument passed
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
