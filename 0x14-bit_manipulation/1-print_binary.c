#include "main.h"

/**
 * print_binary - prints a num as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bitNum = sizeof(n) * 8, toBePrinted = 0;

	while (bitNum)
	{
		if (n & 1L << --bitNum)
		{
			_putchar('1');
			toBePrinted++;
		}
		else if (toBePrinted)
			_putchar('0');
	}
	if (!toBePrinted)
		_putchar('0');
}
