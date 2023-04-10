#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
  * check_coins -  prints the minimum number of coins.
  *
  * @received: number received to compare
  *
  * @coins: coins used
  *
  * @memo: memory to store value of subproblems
  *
  * Return: count
  */
int check_coins(int received, int *coins, int (*memo)[150])
{
	int i, y, temp;

	temp = 0;
	for (i = 0 ; i < 5; i++)
	{
		for (y = 1; y <= received; y++)
		{
			memo[i][0] = 0;

			if (coins[i] > y)
			{
				memo[i][y] = memo[i - 1][y];
			} else
			{
				memo[i][y] = memo[i][y - coins[i]] + 1;
			}

			if (y == received)
			{
				if (memo[i][y] < temp)
				{
					temp = memo[i][y];
				} else if (i == 0)
				{
					temp = memo[i][y];
				}
			}
		}
	}
	return (temp);
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
	int received, minimum, i;
	int coins[5] = {1, 2, 5, 10, 25};
	int memo[5][150];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	received = atoi(argv[1]);
	if (received < 0)
		printf("%d\n", 0);

	minimum = check_coins(received, coins, memo);
	printf("%d\n", minimum);
	return (0);
}
