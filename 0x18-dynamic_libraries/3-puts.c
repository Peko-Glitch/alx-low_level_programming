#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
