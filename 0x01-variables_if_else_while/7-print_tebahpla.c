#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: zero 
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
		putchar('\n');

	return (0);
}
