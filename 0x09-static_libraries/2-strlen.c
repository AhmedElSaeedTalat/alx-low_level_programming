#include <stdio.h>
/**
  * _strlen - function that returns the length of a string
  *
  * @s: pointer to the string recieved
  *
  * Return: return length
  */
int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	};

	return (count);
}
