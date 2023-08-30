#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2d arr
 * @grid: multiD array of char
 * @height: height of the arr
 *
 * Return: void
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer of an array of int
 */
char **strtow(char *str)
{
	char **arr;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	arr = malloc((height + 1) * sizeof(char *));
	if (arr == NULL || height == 0)
	{
		free(arr);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (arr[i] == NULL)
				{
					ch_free_grid(arr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			arr[i][j] = str[a1];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
