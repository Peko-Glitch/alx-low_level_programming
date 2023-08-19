#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');

		n = -n;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar('0' + n / divisor);

		n %= divisor;

		divisor /= 10;
	}
}
