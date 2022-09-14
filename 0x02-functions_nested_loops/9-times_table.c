#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
		{	k = j * i;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
