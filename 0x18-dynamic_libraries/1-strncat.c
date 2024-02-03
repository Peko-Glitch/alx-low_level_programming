#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: type char str
 * @src: type char str
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	for (c = 0; dest[c] != '\0'; c++)
	{
	}
	for (d = 0; src[d] != '\0' && n > 0; d++, n--, c++)
	{
		dest[c] = src[d];
	}
	return (dest);
}
