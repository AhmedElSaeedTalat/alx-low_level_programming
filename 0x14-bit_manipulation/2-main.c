#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

/*  n = get_bit(0,0);
    printf("%d\n", n);
    n = get_bit(0,1);
    printf("%d\n", n);
    n = get_bit(1,0);
    printf("%d\n", n);
    n = get_bit(1,1);
    printf("%d\n", n);
    n = get_bit(2,0);
    printf("%d\n", n);
    n = get_bit(2, 1);
    printf("%d\n", n);
    n = get_bit(9, 3);
    printf("%d\n", n);
    n = get_bit(10, 3);
    printf("%d\n", n);*/
    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
