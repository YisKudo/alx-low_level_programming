#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to two dimernsional array
 * @width: int type
 * @height: int type
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **strout;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	strout = malloc(sizeof(int) * (width + height));
	if (strout == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			strout[i][j] = 0;
		}
	}
	return (strout);
}
