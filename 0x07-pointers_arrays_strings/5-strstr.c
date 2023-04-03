#include <stdio.h>
/**
  * _strstr - function that locates a substring
  *
  * @haystack: first char
  *
  * @needle: second string
  *
  * Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	int y, found;

	found = 0;
	for (; *haystack != '\0';)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (*haystack == needle[y])
			{
				if (*++haystack == needle[y + 1])
				{
					haystack--;
					found = 1;
					return (haystack);
				}
			}
		}
		haystack++;
	}

	if (found == 0)
	{
		return (NULL);
	}
	return (haystack);
}
