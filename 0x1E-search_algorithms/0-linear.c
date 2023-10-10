#include "search_algos.h"
/**
 * linear_search - search linaer algorithm
 *
 * @array: array passed
 * @size: size of array
 * @value: value to search
 *
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
