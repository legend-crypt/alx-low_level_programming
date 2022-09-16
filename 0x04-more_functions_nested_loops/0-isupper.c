#include "main.h"
/**
 * _isupper - check if a character is Upper case
 * @c : the character to be checked
 * Return : 1 is c is lower , 0 otherwise
 */
int _isupper(int c)
{
	int i;

	i = 'A';

	while (i <= 'Z')
	{
		if (c == i)
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}
