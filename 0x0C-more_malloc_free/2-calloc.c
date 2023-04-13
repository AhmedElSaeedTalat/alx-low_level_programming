#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _calloc - do as calloc function
  *
  * @nmemb: number of char
  *
  * @size: size of char
  *
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * sizeof(size));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}

	return (arr);

}
