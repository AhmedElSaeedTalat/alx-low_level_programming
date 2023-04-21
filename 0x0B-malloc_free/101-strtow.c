#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * check_len - check legth.
  *
  * @str: string received
  *
  * @num_strings: number of strings
  *
  * @total: total of characters
  *
  * Return: length
  */
int *check_len(char *str, int *num_strings, int *total)
{
	int i, count;
	int *string_count = malloc(sizeof(int) * 40);

	count = 0;
	for (i = 0; i < 40; i++)
	{
		string_count[i] = 0;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ')
		{
			count++;
			*total = *total + 1;
			if (str[i + 1] == ' ')
			{
				string_count[*num_strings] = count + 1;
				*num_strings = *num_strings + 1;
				count = 0;
			}
		}
	}
	return (string_count);
}
/**
  * copy_string - copies string sent.
  *
  * @str: string received
  *
  * @size: size of string received
  *
  * Return: char
  */
char *copy_string(char *str, int size)
{
	int i, counter;
	char *copied_string = malloc(sizeof(char) * size);

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		if (str[i] != ' ')
		{
			copied_string[counter] = str[i];
			counter++;
		}
	}

	return (copied_string);
}
/**
  * loop - function that loop
  *
  * @count_str: count string
  *
  * @i: i count
  *
  * @counter: counter
  *
  * @arr: array sent
  *
  * @copied_string: copied string
  *
  * Return: counter
  */
int loop(int *count_str, int i, int counter, char **arr, char *copied_string)
{
	int y;

	for (y = 0; y < count_str[i]; y++)
	{
		if (y == count_str[i] - 1)
		{
			arr[i][y] = '\0';
		} else
		{
			arr[i][y] = copied_string[counter];
			counter++;
		}
	}
	return (counter);
}
/**
  * strtow - function that splits a string into words.
  *
  * @str: string received
  *
  * Return: char
  */
char **strtow(char *str)
{
	char **arr, *copied_string;
	int num_strings, total, *count_str, i, counter, x;

	num_strings = total = counter = 0;
	count_str = check_len(str, &num_strings, &total);
	copied_string = copy_string(str, total);
	arr = malloc(sizeof(char *) * num_strings + 1);
	if (arr == NULL)
		free(arr);

	if (str == NULL || *str == '\0' || *str == ' ')
		return (NULL);

	for (i = 0; i < num_strings; i++)
	{
		arr[i] = malloc(sizeof(char) * count_str[i]);
		if (arr[i] == NULL)
		{
			for (x = 0; x < i; x++)
			{
				free(arr[x]);
			}
			free(count_str);
			free(copied_string);
			free(arr);
			return (NULL);
		}
		counter = loop(count_str, i, counter, arr, copied_string);
	}
	return (arr);
}
