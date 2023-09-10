#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int firstD, secondD;

	for (firstD = 0; firstD <= 8; firstD++)
	{
		for (secondD = firstD + 1; secondD <= 9; secondD++)
		{
			putchar(firstD + '0');
			putchar(secondD + '0');

			if (firstD != 8 || secondD != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
