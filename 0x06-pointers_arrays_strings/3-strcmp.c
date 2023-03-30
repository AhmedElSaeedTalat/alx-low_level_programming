#include <stdio.h>
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
	int i, y;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (y = i; y < i + 1 ; y++)
		{
			if (s1[i] != s2[y])
			{
				if (s1[i] > s2[i])
				{
					return (15);
				} else if (s1[i] < s2[i])
				{
					return (-15);
				}
			}
		}
	}

	return (0);
}
