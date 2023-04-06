#include <stdio.h>
/**
  * check_digit - function that check prime numbers
  *
  * @n: received int to check if prime
  *
  * @i: type of counter to check remainder
  *
  * Return: int checked if prime
  */

int check_digit(int n, int i)
{

	if (i == 1)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	}

	return (check_digit(n, i - 1));
}
/**
  * is_prime_number - function that check prime numbers
  *
  * @n: received int
  *
  * Return: 1 if prime 0 if not
  */
int is_prime_number(int n)
{
	int i;

	if (n == 1 || n < 0)
	{
		return (0);
	}

	i = check_digit(n, n - 1);
	return (i);
}
