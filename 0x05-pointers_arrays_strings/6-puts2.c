#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 -> print string
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
