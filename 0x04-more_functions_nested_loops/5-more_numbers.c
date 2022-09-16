#include "main.h"
/**
 * more_numbers - print a sequence of numbers 10 times
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		int j;

		j = 0;
		while (j <= 14)
		{
			if (j < 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
