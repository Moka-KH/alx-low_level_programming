#include <unistd.h>

/**
 * main - Entry point to the program =)
 *
 * Description: prints fixed message followed by
 *	a standard error line =\
 *
 * Return: 1 (error)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
