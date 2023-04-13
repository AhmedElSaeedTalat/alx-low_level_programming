#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * get_len - checks length of a string
  *
  * @s: string received to check
  *
  * Return: length of a string
  */
int get_len(char *s)
{
	int i, length;

	length = 0;
	if (s == NULL)
	{
		return (length);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	if (length == 1 && s[0] == ' ')
	{
		length = 0;
	}

	return (length);
}
/**
  * create_memory - allocate needed memory
  *
  * @length1: length of 1 string
  *
  * @length2: length of 2 string
  *
  * Return: pointer to allocated string
  */
void *create_memory(int length1, int length2)
{
	void *new_string = malloc(sizeof(char) * (length1 + length2 + 1));

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}

	return (new_string);
}
/**
  * copy_toString - copy string to allocated memory
  *
  * @s1: string 1 received
  *
  * @s2: string 2 received
  *
  * @tl: total length
  *
  * @n: number of bytes to copy
  *
  *
  * @nwst: receied memory to copy to
  *
  */

void copy_toString(char *s1, char *s2, int tl, int n, char *nwst)
{
	int counter, i, s1ln, s2ln;

	counter = 0;
	s1ln = get_len(s1);
	s2ln = get_len(s2);

	if (s1 == NULL || s1ln == 0)
	{
		for (i = 0; i < n; i++)
		{
			nwst[i] = s2[i];
		}
		nwst[i] = '\0';
	} else if (s2 == NULL || s2ln == 0 || *s2 == '\0')
	{
		for (i = 0; i < s1ln; i++)
		{
			nwst[i] = s1[i];
		}
		nwst[i] = '\0';
	} else
	{
		for (i = 0; i < s1ln; i++)
		{
			nwst[i] = s1[i];
			counter++;
		}

		for (i = 0; i < tl - 1; i++)
		{
			nwst[counter] = s2[i];
			counter++;
		}

		nwst[i] = '\0';
	}
}
/**
  * string_nconcat - concatenates two strings
  *
  * @s1: string1 received
  *
  * @s2: string2 received
  *
  * @n: num size of string 2
  *
  * Return: pointer to allocated memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length, s2_length, total;

	char *new_string;

	s1_length = get_len(s1);
	s2_length = get_len(s2);

	total = 0;

	if (n >= s2_length)
	{
		new_string = create_memory(s1_length, s2_length);
		if (new_string == NULL)
			return (NULL);

		total = s1_length + s2_length + 1;
	} else
	{
		new_string = create_memory(s1_length, n);
		if (new_string == NULL)
			return (NULL);

		total = s1_length + n + 1;
	}
	if (n >= s2_length)
		copy_toString(s1, s2, total, s2_length, new_string);
	else
		copy_toString(s1, s2, total, n, new_string);
	return (new_string);
}
