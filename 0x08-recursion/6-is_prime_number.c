#include "main.h"

/**
 * is_prime - shows if the input is a prime no. or not
 * @n: input number.
 * @iter: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int iter)
{
	if (n % iter == 0)
	{
		if (n == iter)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - shows if the input is a prime no. or not
 * @n: input num
 * Return: 1 if n is a prime number & 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
