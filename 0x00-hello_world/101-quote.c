#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
  * main - Key point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char tx[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(1, tx, strlen(tx));
	return (1);
}
