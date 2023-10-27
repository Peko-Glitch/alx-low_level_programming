/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 * Return: The value of the bit at index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1;
	mask <<= index;

	if (n & mask)
		return (1);
	else
		return (0);
}

