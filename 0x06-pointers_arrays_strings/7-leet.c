#include <stdio.h>
/**
  * check_letter - function check letter send and sends value
  *
  * @ch: received charter
  *
  * Return: return value of character
  */
char check_letter(char ch)
{
	int arr[10] = {0};
	int c;

	arr['a'] = '4';
	arr['A'] = '4';
	arr['e'] = '3';
	arr['E'] = '3';
	arr['o'] = '0';
	arr['O'] = '0';
	arr['t'] = '7';
	arr['T'] = '7';
	arr['l'] = '1';
	arr['L'] = '1';
	c = arr[(int)ch];

	return (c);

}

/**
  * leet - function that encodes a string into 1337.
  *
  * @str: recieved string
  *
  * Return: char
  */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A'
		|| str[i] == 'e' || str[i] == 'E'
		|| str[i] == 'o' || str[i] == 'O'
		|| str[i] == 't' || str[i] == 'T'
		|| str[i] == 'l' || str[i] == 'L')
		{
			str[i] = check_letter(str[i]);
		}
	}
	return (str);

}
