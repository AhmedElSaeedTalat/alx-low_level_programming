#include <stdio.h>
/**
  * _strcpy - function that copies the string pointed
  *
  * @dest: char pointer recieved
  *
  * @src: char pointer
  *
  * Return: char pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	};

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	};

	return (dest);
}
