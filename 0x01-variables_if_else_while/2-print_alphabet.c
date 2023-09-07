#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	while ((ch = getchar()))
	{
		putchar(tolower(ch));
	}

	return (0);
}

