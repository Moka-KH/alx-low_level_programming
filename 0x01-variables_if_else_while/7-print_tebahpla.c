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
	char var= 'z';
	
	while(var >= 'a')
	{
		putchar(var);
		var--;
	}
	putchar('\n');
	return (0);
}
