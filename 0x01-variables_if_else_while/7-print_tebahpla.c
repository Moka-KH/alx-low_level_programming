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
	char var;

	for (var = 'z'; var >= 'a'; var--)
		putchar(var);
		putchar('\n');

	return (0);
}
