#include <stdio.h>
/**
  * _strspn - function that gets the length of a prefix substring
  *
  * @s: first char
  *
  * @accept: second char
  *
  * Return: int
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, y, count, found;

	count = 0;
	found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i > 0 && found == 1)
		{
			found = 0;
		}

		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				count++;
				found = 1;
			}
		}

		if (found == 0)
		{
			return (count);
		}
	}
	return (count);
}
