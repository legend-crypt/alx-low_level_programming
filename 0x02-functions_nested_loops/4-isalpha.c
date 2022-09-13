#include "main.h"
/*
 * _isalpha check for alphabet  character,
 * @c: the character to be checked
 * Return: 1 is c is letter, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));


}
