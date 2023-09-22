#include "main.h"

/**
 * flip_bits - return number of bits to be flipped to
 * convert numbers
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int numToBeFlipped = 0;

	while (val)
	{
		if (val & 1ul)
			numToBeFlipped++;
		val = val >> 1;
	}
	return (numToBeFlipped);
}
