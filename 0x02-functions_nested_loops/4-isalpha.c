#include "main.h"

/**
 * _isalpha -> this program checks for alphabetical letters
 * @c: a character to be check and passing character as the argument
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	
	return 0;
}
