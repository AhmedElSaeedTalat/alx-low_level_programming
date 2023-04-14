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
	void *str, *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	str = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}

	for (i = 0; i < old_size; i++)
	{
		((unsigned char *)new_ptr)[i] = ((unsigned char *)str)[i];
	}

	free(ptr);
	return (new_ptr);
}
