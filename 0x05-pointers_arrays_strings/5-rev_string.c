#include "main.h"
/**
 * rev_string -> function to reverse string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	char *r;

	r = s;
	while (*(r + 1) != '\0')
	{
		r = r + 1;
	}
	while (s < r)
	{
		tmp = *s;
		*s = *r;
		*r = tmp;

		s += 1;
		r -= 1;
	}	

}
