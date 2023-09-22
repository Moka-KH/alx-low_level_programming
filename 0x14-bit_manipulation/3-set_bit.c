#include "main.h"

/**
 * set_bit - sets the bit at given index
 * @n: the num to index
 * @index: where to set the bit
 *
 * Return: 1 on success & -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
