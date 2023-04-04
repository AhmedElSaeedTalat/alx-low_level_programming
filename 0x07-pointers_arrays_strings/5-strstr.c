#include <stdio.h>
/**
  * check_len - checks length
  *
  * @str: received str
  *
  * Return: int
  */
int check_len(char *str)
{
	int count;

	for (; *str != '\0'; str++)
	{
		count++;
	};

	return (count);
}

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
	int stack_len, needle_len;

	stack_len = check_len(haystack);
	needle_len = check_len(needle);

	if (*needle == '\0' || needle == NULL)
	{
		return (haystack);
	};

	if (haystack == NULL || *haystack == '\0' || needle_len > stack_len)
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
