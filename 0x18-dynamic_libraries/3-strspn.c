#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: type char returns the number of bytes
 * @accept: bytes from accept
 * Return: return a
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		b = 0;
		if (c == 0)
			break;
		str++;
		a++;
	}
	return (a);
}
