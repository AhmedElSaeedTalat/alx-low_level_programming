#include <stdio.h>
int check_len(char *str)
{
	int len, i;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	};

	len--;
	return (len);
}


/**
  * _strncpy - function that copies a string
  *
  * @dest: first string
  *
  * @src: second string
  *
  * @n: num bytes
  *
  * Return: final string
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *txt1, *txt2;
	int i, len, len_dest;

	txt1 = src;
	txt2 = dest;
	len = check_len(src);
	len_dest = check_len(dest);
	if (n <= len)
	{
		for (i = 0; i <= n; i++)
		{
			*txt2 = *txt1;
			txt1++;
			txt2++;
		}
	}
	else if (n > len)
	{
		for (i = 0; i <= len_dest; i++)
		{
			if (*txt1 == '\0')
			{
				*txt2 = '\0';
			} else
			{
				*txt2 = *txt1;
			}
			txt1++;
			txt2++;
		};
	}
	return (dest);
}
