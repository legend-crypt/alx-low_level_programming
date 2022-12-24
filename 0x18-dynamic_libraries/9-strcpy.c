#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copy one string to another
 * @dest: the string to copy
 * @src: the string to copy
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
