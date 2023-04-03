#include <stdio.h>
/**
  * _strchr - function that locates a character in a string
  *
  * @s: first char
  *
  * @c: second char
  *
  * Return: char
  */
char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
	{
		return (NULL);
	}

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
