#include "main.h"
/**
 * print_to_98 - print the number passed argument to 98
 * @n: the number start print from
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		if (i == 98)
		{
			break;
		}
	}
}
