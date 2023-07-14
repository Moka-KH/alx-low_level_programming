#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: zeroo
 */

int main(void)
{
	int num;
	char x;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
