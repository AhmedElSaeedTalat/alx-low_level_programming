#include <stdio.h>
/**
  * _strlen_recursion - function that returns the length of a string
  *
  * @s: received string
  *
  * Return: int represents the length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
