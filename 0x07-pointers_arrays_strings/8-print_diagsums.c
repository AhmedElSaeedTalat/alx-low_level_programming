#include <stdio.h>
/**
  * print_diagsums - function that prints the sum of the two diagonals
  *
  * @a: int
  *
  * @size: int
  */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, y, count;

	i = 0;
	y = 0;
	sum1 = 0;
	sum2 = 0;
	count = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		i = i + (size + 1);
	}

	while (y < size * size)
	{
		y = y + (size - 1);
		count++;
		if (count == size + 1)
		{
			break;
		}

		sum2 += a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}
