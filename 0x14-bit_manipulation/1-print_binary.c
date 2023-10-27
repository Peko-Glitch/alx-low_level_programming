#include <stdio.h>
#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int shift, leading_zeros;
	unsigned long int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(n) * 8 - 1;
	leading_zeros = 1;

	while (shift >= 0)
	{
		bit = (n >> shift) & 1;

		if (bit == 1)
			leading_zeros = 0;

		if (!leading_zeros)
			_putchar(bit + '0');

		shift--;
	}
}
