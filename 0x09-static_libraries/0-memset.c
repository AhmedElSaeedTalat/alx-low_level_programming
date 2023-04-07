#include <stdio.h>
/**
  * _memset -  function that fills memory with a constant byte.
  *
  * @s: first string
  *
  * @b: second string
  *
  * @n: int
  *
  * Return: char
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != -1; i++)
	{
		if (i == n)
		{
			break;
		}

		s[i] = b;
	}

	return (s);
}
