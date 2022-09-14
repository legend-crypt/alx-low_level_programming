#include "main.h"
/**
 *  print_alphabet - print in lowercase follwed by a new line
 *  @ch: the character to be check
 *  Return: no return
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
