#include <stdio.h>
/**
  * _strpbrk - function that searches a string for any of a set of bytes
  *
  * @s: first char
  *
  * @accept: second char
  *
  * Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int y;

	for (; *s != '\0';)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}

		s++;
	}

	return (s);
}
