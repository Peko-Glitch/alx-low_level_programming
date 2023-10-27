#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: The binary string to convert.
 * Return: The converted unsigned int, or 0 if there are invalid characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}

