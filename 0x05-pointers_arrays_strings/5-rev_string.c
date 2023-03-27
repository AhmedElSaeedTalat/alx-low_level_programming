#include "main.h"
#include <stdio.h>
/**
  * rev_string -  function that reverses a string
  *
  * @s: a string to be reversed
  */
void rev_string(char *s)
{
	int i, len, i_reverse;
	char ch[900];

	len = 0;
	i_reverse = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	};

	len--;

	for (i = len ; i >= 0; i--)
	{
		ch[i_reverse] = s[i];
		i_reverse++;

	};

	for (i = 0; i <= len; i++)
	{
		s[i] = ch[i];
	}
}
