#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char num, ch;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	};

	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	};

	putchar('\n');
	return (0);
}
