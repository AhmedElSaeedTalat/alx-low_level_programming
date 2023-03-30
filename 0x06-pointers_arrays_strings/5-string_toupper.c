#include <stdio.h>
/**
  * string_toupper -  function that changes all lowercase letters
  *
  * @str: recieves a pointer
  *
  * Return: returns a pointer
  */
char *string_toupper(char *str)
{
	int i;
	char *s = str;

	for (i = 0; *str != '\0'; i++)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}

	return (s);
}
