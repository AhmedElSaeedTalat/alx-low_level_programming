#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * alloc_grid - returns a pointer to a 2 dimensional array
  *
  * @width: received width
  *
  * @height: received height
  *
  * Return: 2d array
  */
int **alloc_grid(int width, int height)
{
	int **arr, i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			arr[i][y] = 0;
		}
	}
	return (arr);
}
