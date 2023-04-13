#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * array_range - creates an array of integers
  *
  * @min: min int
  *
  * @max: max int
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i, num_numbers, *arr;

	if (min > max)
		return (NULL);

	num_numbers = max - min + 1;
	arr = malloc(sizeof(int) * num_numbers);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= num_numbers; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
