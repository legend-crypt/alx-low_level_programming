#include <stdio.h>

/**
 * run_first - run before the start of main
 * Return: 0
 */

int run_first(void) __attribute__ ((constructor));

int run_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return (0);
}
