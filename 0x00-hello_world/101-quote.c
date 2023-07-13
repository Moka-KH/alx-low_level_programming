#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program =)
 * Description: prints fixed message followed by a standard error line "second advanced task =)"
 * Return: 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
