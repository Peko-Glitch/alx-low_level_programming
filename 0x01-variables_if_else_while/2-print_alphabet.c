#include <stdio.h>
/**
 * main - Entry main
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		printf("%c", c);
		c += 1;
	}
	printf("\n");
	return (0);
}
