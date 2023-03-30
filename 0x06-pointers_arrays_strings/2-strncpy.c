#include <stdio.h>

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
	char *txt_src, *txt_dest;
	int i;

	txt_src = src;
	txt_dest = dest;

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		*txt_dest = *txt_src;
		txt_src++;
		txt_dest++;
	}

	for (; i < n; i++)
	{
		*txt_dest = '\0';
		txt_dest++;
	}

	return (dest);
}
