#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num <= 9)
	{
		putchar (num + '0');
		num += 1;
	}
	while (alpha <= 'f')
	{
		putchar (alpha);
		alpha += 1;
	}
	putchar ('\n');

	return (0);
}
