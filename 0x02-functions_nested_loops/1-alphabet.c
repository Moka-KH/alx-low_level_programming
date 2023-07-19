#include "main.h"

/**
 * print_alphabet - function of task 1
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
