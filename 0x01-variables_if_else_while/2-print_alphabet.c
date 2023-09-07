#include <stdio.h>
#include <ctype.h>
/**
 * main -Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{

		}
		putchar(tolower(ch));
		fflush(stdout);
	}

	return (0);
}

