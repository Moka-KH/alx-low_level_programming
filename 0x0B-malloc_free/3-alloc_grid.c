#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D arr of int
 * @width: width of the arr
 * @height: height of the arr
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, k;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			arr[i][k] = 0;

	return (arr);
}
