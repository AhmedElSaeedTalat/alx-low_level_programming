#include "search_algos.h"
#include <math.h>
/**
 * print - print value compared to
 *
 * @array: pointer to array passed
 * @i: index to value to print
 */
void print(int *array, int i)
{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
/**
 * jump_search - jump search algorith
 *
 * @array: pointer to array passed
 * @size: size of array passed
 * @value: to search
 *
 * Return: -1 on failure, index on success
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, l, h, i;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt((int) size);

	for (l = 0, h = l + jump; h < (int) size; l += jump, h += jump)
	{
		print(array, l);
		if (value > array[l] && value > array[h])
		{
			continue;
		}
		else if (value >= array[l] && value <= array[h])
		{
			printf("Value found between indexes [%d] and [%d]\n", l, h);
			for (i = l; i <= h; i++)
			{
				print(array, i);
				if (value == array[i])
					return (i);
			}
		}
	}
	print(array, l);
	return (-1);
}
