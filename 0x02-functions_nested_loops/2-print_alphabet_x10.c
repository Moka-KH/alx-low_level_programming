#include "main.h"

/**
 * print_alphabet_x10 - task 2
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}
		_putchar('\n');
	}
}
