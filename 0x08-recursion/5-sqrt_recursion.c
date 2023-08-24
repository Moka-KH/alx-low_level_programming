#include "main.h"

/**
 * power_operation - returns the square root of a n
 * @n: input number
 * @iter: iterator
 * Return: square root or -1
 */
int power_operation(int n, int iter)
{
	if (iter % (n / c) == 0)
	{
		if (iter * (n / iter) == n)
			return (iter);
		else
			return (-1);
	}
	return (0 + power_operation(n, iter + 1));
}
/**
 * _sqrt_recursion - returns the square root of a n
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
