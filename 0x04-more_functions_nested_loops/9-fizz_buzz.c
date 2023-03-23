#include <stdio.h>
/**
  * print_numbers - print numbers except 3 and 5
  */
void print_numbers(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else
		{
			printf("%d ", i);
		}
	};

	putchar('\n');
}
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	print_numbers();
	return (0);
}
