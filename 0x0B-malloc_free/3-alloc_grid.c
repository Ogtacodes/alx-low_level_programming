#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **og;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	og = malloc(sizeof(int *) * height);

	if (og == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		og[x] = malloc(sizeof(int) * width);

		if (og[x] == NULL)
		{
			for (; x >= 0; x--)
				free(og[x]);

			free(og);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			og[x][y] = 0;
	}

	return (og);
}

