#include <stdio.h>
#include <string.h>
/**
  *  _strcmp - function that compares two strings
  *
  * @s1: string 1
  *
  * @s2: string 2
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1 == NULL && s2 == NULL)
	{
		return (0);
	} else if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}

	for (i = 0; *s1 == *s2; i++)
	{
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
	}

	if (*s1 > *s2)
	{
		return (1);
	} else if (*s1 < *s2)
	{
		return (-1);
	}

	return (0);
}
