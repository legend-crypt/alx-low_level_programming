#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: the string to be checked
 */
void print_rev(char *s)
{
	int len, i;
	char *start, *end, temp;

		len = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}


	printf("%s", s);
}
