#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: N/A.
 */
void print_numbers(void)
{
	char digit
		;
	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
