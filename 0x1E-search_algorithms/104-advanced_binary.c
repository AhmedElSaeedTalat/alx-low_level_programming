#include "search_algos.h"
/**
 * print_array - prints array passed
 *
 * @array: pointer to array passed
 * @l: left-most of array
 * @r: right most of array
 *
 */
void print_array(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
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
 * search - search value recursively
 *
 * @array: pointer to array passed
 * @val: value to search the array
 * @l: left-most index in the array
 * @r: right-most index in the array
 *
 * Return: Always EXIT_SUCCESS
 */
int search(int *array, int val, int l, int r)
{
	int mid;

	if (l > r)
		return (-1);

	mid = l + (r - l) / 2;
	print_array(array, l, r);
	if (array[mid] == val)
	{
		if (array[mid] == val && mid == l)
			return (mid);
		else if (array[mid - 1] == val)
			return (search(array, val, l, mid));
		else if (array[mid + 1] == val)
			return (search(array, val, mid, r));
		else
			return (mid);
	}
	else if (array[mid] > val)
	{
		return (search(array, val, l, mid - 1));
	}
	else
	{
		return (search(array, val, mid + 1, r));
	}
}
/**
 * advanced_binary - search value in sorted array
 *
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 *
 * Return: pass index on success or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL || size == 0)
		return (-1);
	index = search(array, value, 0, (int)size - 1);
	return (index);
}
