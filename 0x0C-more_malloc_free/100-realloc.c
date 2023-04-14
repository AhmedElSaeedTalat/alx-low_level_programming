#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates a memory block using malloc and free
  *
  * @ptr: received pointer
  *
  * @old_size: old size
  *
  * @new_size: new_size
  *
  * Return: Always 0 (Success)
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *str, *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	str = ptr;
	new_ptr = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = str[i];
	}

	free(ptr);
	return (new_ptr);
}
