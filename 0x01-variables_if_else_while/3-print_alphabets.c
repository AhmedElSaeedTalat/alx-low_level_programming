#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch, cap;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	};

	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	};
	putchar('\n');
	return (0);
}
