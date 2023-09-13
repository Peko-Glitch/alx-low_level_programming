#include <stdio.h>

void print_alphabet_x10(void)
{
	char letters[]="abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for(i = 1; i <= 10; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			putchar(letters[j]);
		
		}
		putchar('\n');
	}
}
