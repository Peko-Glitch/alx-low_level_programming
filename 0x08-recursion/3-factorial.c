#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: The input number
 *
 * Return: The factorial of n, or -1 for errors
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

