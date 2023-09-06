#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
		for (i = 0; str[i]; i++)
		{
			putchar(str[i]);
		}
	return (1);
}
