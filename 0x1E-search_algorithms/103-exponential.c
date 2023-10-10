#include "search_algos.h"
/**
 * print_array - prints array for each search
 *
 * @array: pointer to array passed
 * @l: left-most index at array
 * @h: right most index at array
 *
 */
void print_array(int *array, int l, int h)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		if (i == l)
		{
			printf("%d", array[i]);
			continue;
		}
		printf(", %d", array[i]);
	}
	printf("\n");
}
/**
 * print - print each value checked
 *
 * @array: pointer to array passed
 * @i: index of value checked in an array
 *
 */
void print(int *array, int i)
{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
/**
 * search - binary search
 *
 * @array: pointer to passed array
 * @l: left most index at array
 * @h: right most index at array
 * @value: value to search
 *
 * Return: Always EXIT_SUCCESS
 */
int search(int *array, int l, int h, int value)
{
	int mid;

	mid = l + (h - l) / 2;
	if (l > h)
		return (-1);
	print_array(array, l, h);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (search(array, l, mid - 1, value));
	else
		return (search(array, mid + 1, h, value));
}

/**
 * exponential_search - search algorithm
 *
 * @array: pointer to array passed
 * @size: size of the array
 * @value: value to search
 *
 * Return: -1 on failure, index on success
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, l, h, index;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		print(array, 0);
		return (0);
	}
	for (i = 1; i < (int) size && array[i] <= value; i *= 2)
	{
		print(array, i);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
	}
	l = i / 2;
	h = i;
	if (i >= (int) size)
		h = (int) size - 1;
	printf("Value found between indexes [%d] and [%d]\n", l, h);
	index = search(array, l, h, value);
	return (index);
}
