#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return:0
 */

int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
