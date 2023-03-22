#include <stdio.h>
/**
  * print_to_98 - a function that prints all natural numbers from n to 98
  *
  * @n: recieved arg to process
  *
  */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf(" %d", i);
			} else if (i == n)
			{
				printf("%d,", i);
			} else
			{
				printf(" %d,", i);
			}
		};
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf(" %d", i);
			} else if (i == n)
			{
				printf("%d,", i);
			} else
			{
				printf(" %d,", i);
			}
		}
	} else
	{
		printf("%d", n);
	};

	putchar('\n');
}
