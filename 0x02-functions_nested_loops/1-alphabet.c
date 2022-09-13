#include "main.h"
/**
 *  print_alphabet in lowercase follwed by a new line
 */
void print_alphabet(void)
{
	char ch;
	ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}	
