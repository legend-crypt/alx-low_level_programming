#include "main.h"

/**
 * _puts_recursion - print string followed by a newline
 * @s: the string to checked
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		puts(s + _puts_recursion(s[1]));
	}
}
