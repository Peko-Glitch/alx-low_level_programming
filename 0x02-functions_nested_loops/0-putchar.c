#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char mystring[] = "_putchar";
	int i;

	for (i = 0; mystring[i]; i++)
	{
		putchar(mystring[i]);
	}
	putchar('\n');

	return (0);
}
