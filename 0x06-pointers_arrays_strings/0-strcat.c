#include <stdio.h>
/**
  * _strcat -  function that concatenates two strings
  *
  * @dest: first string recieved
  *
  * @src: second string received
  *
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	int i;
	char *text1;
	char *text2;

	text1 = dest;
	text2 = src;

	for (i = 0; dest[i] != '\0'; i++)
	{
		text1++;
	};

	for (i = 0; src[i] != '\0'; i++)
	{
		*text1 = *text2;
		text1++;
		text2++;
	};

	return (dest);
}
