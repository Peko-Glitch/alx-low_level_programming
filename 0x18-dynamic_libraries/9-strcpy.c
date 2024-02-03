#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';

	return (dest);
}
