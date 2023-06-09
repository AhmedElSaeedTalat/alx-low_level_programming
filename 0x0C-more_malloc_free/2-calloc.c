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
	void *arr;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	array = arr;
	for (i = 0; i < nmemb * size ; i++)
	{
		array[i] = 0;
	}

	return (arr);

}
