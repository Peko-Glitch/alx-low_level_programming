#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');

	return (0);
}
