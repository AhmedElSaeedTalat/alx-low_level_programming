#include <stdio.h>
/**
  * check_flag - function that checks the flag
  *
  * @ch: letter sent to check if its flag
  *
  * Return: a value to confirm if the char was a flag
  */
int check_flag(int ch)
{
	int i;
	int arr[30] = {44, 59, 46, 33, 63, 32, 34, 40, 41, 123, 125, 9, 10};

	for (i = 0; i < 14; i++)
	{
		if (ch == arr[i])
		{
			return (1);
		}
	}

	return (0);
}
/**
  * cap_string - function that capitalizes all words
  *
  * @str: string to capitalize
  *
  * Return: a string to be capitalized
  */
char *cap_string(char *str)
{
	int i, flag;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			flag = 0;
		} else if (flag == 1 && str[i] >= 65 && str[i] <= 90)
		{
			flag = 0;
		}

		flag = check_flag(str[i]);
	}

	return (str);
}
