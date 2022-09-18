#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - create fizzbuzz
 * @num: the number to be check
 */
void fizz_buzz(int num)
{
	int i;

	i = 1;
	while (i <= num)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}
