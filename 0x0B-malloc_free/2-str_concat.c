#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * check_len - check length of the string
  *
  * @s: string passed
  *
  * Return: length of the string
  */
int check_len(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}


/**
  * str_concat - concatenates two strings
  *
  * @s1: first sting received
  *
  * @s2: second string received
  *
  * Return: pointer to concatinated string
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, y, s1_len, s2_len, total_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_len = check_len(s1);
	s2_len = check_len(s2);
	total_len = (s1_len + s2_len) + 1;
	s = malloc(sizeof(char) * total_len);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		s[i] = s1[i];
	}

	for (i = s1_len, y = 0; i < total_len; i++, y++)
	{
		s[i] = s2[y];
	}
	return (s);
}
