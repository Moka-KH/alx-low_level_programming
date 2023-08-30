#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer of the 1st string
 * @s2: pointer of the 2nd string
 * Return: pointer to new string or NULL if the string is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *first, *second;
	int i = 0, lens1 = 0, lens2 = 0;

	first = s1;
	second = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = first;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = second;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	first = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (first);
}
