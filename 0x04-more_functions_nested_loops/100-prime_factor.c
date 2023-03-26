#include <stdio.h>
#include <stdbool.h>
/**
  * check_largest - check largest prime
  *
  * @arr: array with prime values;
  *
  * @count: count for array
  */
void check_largest(int *arr, int count)
{
	int largest = arr[0];
	int i;

	for (i = 0; i <= count; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		};
	};

	printf("%d\n", largest);
}
/**
  * check_prime - check prime values
  *
  * @n: value entered to check
  *
  * @original_n: origianl value entered to check
  */
void check_prime(long int n, long int original_n)
{
	int i, y;
	static int count;
	static int arr[5];

	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			for (y = 0; y < n; y++)
			{
				n = n / i;
				if (n % i != 0)
				{
					arr[count] = i;
					count++;
					check_prime(n, original_n);
					return;
				};
			}
		}
	};
	arr[count] = n;
	check_largest(arr, count);
}

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long n = 612852475143;

	check_prime(n, n);
	return (0);
}
