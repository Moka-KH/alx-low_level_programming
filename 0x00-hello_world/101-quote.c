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
	char quote[] = "and that piece of art is useful\"
			 - Dora Korpar, 2015-10-19\n";
	
	write(1, quote, 59);
	return (1);
}
