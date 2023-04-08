#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds positive numbers
  *
  * @argc: size of array
  *
  * @argv: array of strings
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i, y, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y] != '\0'; y++)
		{
			if (!isdigit(argv[i][y]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	if (argc == 1)
	{
		printf("%d\n", 0);
	} else

		printf("%d\n", sum);
	return (0);
}
