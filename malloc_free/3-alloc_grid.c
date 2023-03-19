#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int n, i;
	int **p;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	p = malloc(sizeof(*) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (n = 0 ; n < height ; n++)
	{
		p[n] = malloc(sizeof(int) * width);

		if (p[n] == NULL)
		{
			while (n >= 0)
			{
				free(p[n]);
				n--;
			}
			free(p);
			return (NULL);
		}
		else
		{
			for (i = 0 ; p[n][i] ; i++)
			{
				p[n][i] = 0;
			}
		}
	}
	return (p);
}
