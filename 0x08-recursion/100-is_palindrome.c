#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: input string
 * @small: smallest iterator
 * @big: biggest iterator
 * Return: .
 */
int comparator(char *s, int small, int big)
{
	if (*(s + small) == *(s + big))
	{
		if (small == big || small == big + 1)
			return (1);
		return (0 + comparator(s, small + 1, big - 1));
	}
	return (0);
}

/**
 * is_palindrome - shows if a string is a palindrome
 * @s: input string
 * Return: 1 if s is a palindrome & 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
