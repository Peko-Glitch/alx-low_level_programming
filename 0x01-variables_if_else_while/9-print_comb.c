#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num += 1;
	}
	putchar('\n');

	return (0);
}

