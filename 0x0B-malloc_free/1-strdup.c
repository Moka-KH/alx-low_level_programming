#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory
 * @str: string
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
        char *oldstr;
        unsigned int i, k;

        if (str == NULL)
                return (NULL);

        for (i = 0; str[i] != '\0'; i++)

        oldstr = (char *)malloc(sizeof(char) * (i + 1));

        if (oldstr == NULL)
                return (NULL);

        for (k = 0; k <= i; k++)
                oldstr[k] = str[k];

        return (oldstr);
}
