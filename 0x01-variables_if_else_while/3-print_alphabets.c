#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		printf("%c", a);
		a += 1;
	}
	while (A <= 'Z')
	{
		printf("%c", A);
		A += 1;
	}
	printf("\n");
	return (0);
}
