#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	/* Handle the sign of the number */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through the string and convert digits to an integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			/* Break if a non-digit character is encountered */
			break;
		}

		i++;
	}

	return (num * sign);
}
