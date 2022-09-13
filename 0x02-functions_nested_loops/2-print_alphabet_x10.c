#include "main.h"
/** 
 * print_alphabetx10 print alphabet 10times in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while(i < 10)
	{
		ch = 'a';
		while(ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
