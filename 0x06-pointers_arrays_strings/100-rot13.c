#include <stdio.h>
/**
  * rot13 -  function that encodes a string using rot13
  *
  * @str: received string to encode
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >=  110 && str[i] <= 122) || (str[i] >= 78 && str[i] <= 90))
		{
			str[i] = (str[i] + 13) - 26;

		} else if ((str[i] >= 97 && str[i] < 110) || (str[i] >= 65 && str[i] < 78))
		{
			str[i] = str[i] + 13;
		} else
		{
			str[i] = str[i];
		}

	}
	return (str);
}
