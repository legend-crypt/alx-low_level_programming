#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of character to be appended
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
