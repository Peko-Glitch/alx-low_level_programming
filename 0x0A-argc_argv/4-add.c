#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		int num = atoi(argv[i]);

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

