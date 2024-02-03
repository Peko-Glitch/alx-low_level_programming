#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings.
 * @s1: type str
 * @s2: type str
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)

{
	int o;

	for (o = 0; s1[o] != '\0' && s2[o] != '\0'; o++)
	{
		if (s1[o] != s2[o])
		return (s1[o] - s2[o]);
	}
	return (0);
}
