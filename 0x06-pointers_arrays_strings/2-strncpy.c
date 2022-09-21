#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copy string to another 
 * @dest: the pointer to the string
 * @src: the string
 * @n the number of strings to be copied
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
