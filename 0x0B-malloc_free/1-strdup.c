#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * _strdup - contains a copy of the string given as a parameter.
  *
  * @str: received string to copy
  *
  * Return: pointer to copied string in newly allocated memory
  */
char *_strdup(char *str)
{
	int i, count;
	char *s;

	count = 0;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	s = malloc(sizeof(char) * count + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
