#include <stdio.h>
/**
  * array_iterator - iterates array using pointer
  *
  * @array: array received
  *
  * @size: size of array
  *
  * @action: function passed
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
