#include <stdio.h>
/**
  * puts2 - function that prints every other character
  *
  * @str: str recieved
  */
void puts2(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	};

	len--;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		};

		putchar(str[i]);
	};

	putchar('\n');
}
