#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
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
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}

	return (arr);

}
