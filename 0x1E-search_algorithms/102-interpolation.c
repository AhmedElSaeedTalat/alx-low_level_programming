#include "search_algos.h"
/**
 * search - search value recursively
 *
 * @array: pointer to array passed
 * @l: left-most index
 * @h: right-most index
 * @val: value to search
 * @size: size of the array
 *
 * Return: Always EXIT_SUCCESS
 */
int search(int *array, int l, int h, int val, size_t size)
{
	size_t pos;

	pos = l + (((double)(h - l) / (array[h] - array[l])) * (val - array[l]));
	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	if (array[pos] == val)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	else if (val > array[pos])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (search(array, pos + 1, h, val, size));
	}
	else
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (search(array, l, pos - 1, val, size));
	}
}
/**
 * interpolation_search - search algorithm
 *
 * @array: pointer to array passed
 * @size: size of the array
 * @value: value of the array
 *
 * Return: index to found value on success, -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (-1);
	index = search(array, 0, (int) size - 1, value, size);
	return (index);
}
