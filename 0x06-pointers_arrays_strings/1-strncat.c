#include <stdio.h>
/**
  * _strncat - function that concatenates two strings
  *
  * @dest: first string
  *
  * @src: second string
  *
  * @n: received int
  *
  * Return: string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *txt1;
	char *txt2;

	txt1 = dest;
	txt2 = src;
	for (i = 0; dest[i] != '\0'; i++)
	{
		txt1++;
	};

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*txt1 = *txt2;
		txt1++;
		txt2++;
	};

	return (dest);
}
