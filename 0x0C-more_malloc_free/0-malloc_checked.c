#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
  * malloc_checked - returns allocated memory
  *
  * @b: size of memory
  *
  * Return: a pointer to an allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);
	return (alloc);
}
