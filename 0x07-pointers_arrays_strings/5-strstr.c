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
	char *scanned_string, *string_find;

	if (*needle == '\0' || needle == NULL)
	{
		return (heystack);
	};

	if (haystack == NULL)
	{
		return (NULL);
	}

	for (; *haystack != '\0'; haystack++)
	{
		scanned_string = haystack;
		string_find = needle;

		for (; *scanned_string != '\0' && *string_find != '\0';
		scanned_string++, string_find++)
		{
			if (*scanned_string != *string_find)
			{
				break;
			}

		}

		if (*scanned_string == '\0')
		{
			return (haystack);
		}
	}



	return (NULL);
}
