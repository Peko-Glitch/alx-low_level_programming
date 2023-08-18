#include "main.h"

/**
 *_isdigit - checks for a digit (0 through 9).
 * @c: the checking param.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 'o' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
