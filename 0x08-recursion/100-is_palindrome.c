#include "main.h"
/**
  * last - get the last address in the string
  *
  * @s: string received
  *
  * Return: last address
  */
char *last(char *s)
{
	s++;
	if (*s == '\0')
	{
		return (s);
	}

	return (last(s));
}
/**
  * helper - do the actual process of is palindrome
  *
  * @s: string received
  *
  * @current_address: provide current address
  *
  * @reverse_address: provide reversed address
  *
  * Return: result
  */

int helper(char *s, char *current_address, char *reverse_address)
{
	if (*current_address == '\0')
	{
		reverse_address--;

		if (*s == '\0')
		{
			return (1);
		}

		if (*reverse_address != *s)
		{
			return (0);
		}
		s++;
		return (helper(s, current_address, reverse_address));
	}

	current_address++;
	return (helper(s, current_address, reverse_address));
}
/**
  * is_palindrome - if a string is a palindrome
  *
  * @s: string received
  *
  * Return: result
  */
int is_palindrome(char *s)
{
	char *current_address, *reverse_address, *curr;
	int result;

	current_address = s;
	curr = s;
	reverse_address = last(curr);
	result = helper(s, current_address, reverse_address);
	return (result);
}
