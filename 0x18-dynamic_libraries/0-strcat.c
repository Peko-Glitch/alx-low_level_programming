#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: char string
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int k, l;

	for (k = 0; dest[k] != '\0'; k++)
		;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[k] = src[l];
		k++;
	}

	dest[k] = '\0';
	return (dest);
}
