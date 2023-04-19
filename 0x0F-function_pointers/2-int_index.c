#include <stdio.h>
/**
  * int_index - searches for an integer
  *
  * @array: received array
  *
  * @size: size of an array
  *
  * @cmp: pointer to a function to cmp values
  *
  * Return: Always 0 (Success)
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	if (cmp(array[i]) == 0)
		return (-1);

	return (i);
}
