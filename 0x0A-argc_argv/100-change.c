#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * check_coins -  prints the minimum number of coins.
  *
  * @received: number received to compare
  *
  * @coins: coins used
  *
  * Return: count
  */
int check_coins(int received, int *coins)
{
	int i, remainder, temp, count, val;

	remainder = 0;
	count = 0;
	for (i = 0; i < 5; i++)
	{
		if (received < coins[i])
			continue;

		if (remainder > 0 && remainder >= coins[i])
		{
			temp += coins[i];
			count++;
			if (temp == received)
				return (count);
		}

		if (remainder == 0)
		{
			remainder = received % coins[i];
			if (remainder == 0)
			{
				count = received / coins[i];
				return (count);
			}

			val = received - remainder;
			temp = (val / coins[i]) * coins[i];
			count = val / coins[i];
		}
	}
	return (count);
}

/**
  * main -  prints the minimum number of coins.
  *
  * @argc: size of array
  *
  * @argv: array of strings
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int received, minimum;
	int coins[5] = {25, 10, 5, 2, 1};
	(void) argc;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	received = atoi(argv[1]);
	if (received < 0)
		printf("%d\n", 0);

	minimum = check_coins(received, coins);
	printf("%d\n", minimum);
	return (minimum);
}
