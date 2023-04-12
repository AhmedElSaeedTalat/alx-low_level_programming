#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * check_len - check length of the string
 *
 * @ac: num of arguments passed
 *
 * @av: arguments passed
 *
 * Return: length of the string
 */
int check_len(int ac, char **av)
{
	int i, y, count;

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			count++;
		}
	}

	return (count);
}
/**
  * argstostr - concatenates all the arguments of your program
  *
  * @ac: num of arguments passed
  *
  * @av: arguments passed
  *
  * Return: pointer to a string
  */
char *argstostr(int ac, char **av)
{
	int i, y, x, count;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	count = check_len(ac, av);
	str = malloc((sizeof(char) * count) + ac + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (i > 0)
		{
			str[x] = '\n';
			x++;
		}

		for (y = 0; av[i][y] != '\0'; y++)
		{
			str[x] = av[i][y];
			x++;
		}
	}

	str[x] = '\n';
	x++;
	str[x] = '\0';
	return (str);
}
