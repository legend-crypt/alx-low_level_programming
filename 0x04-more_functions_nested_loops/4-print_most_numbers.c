#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 and skip 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');

		if (i == 2 || 4)
		{
			continue;
		}
		i++; 
	}
	_putchar('\n');
}
