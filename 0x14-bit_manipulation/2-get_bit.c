#include "main.h"

/**
 * get_bit - gets the bit at given index
 * @n: the num to index
 * @index: where to get the bit
 *
 * Return: the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
