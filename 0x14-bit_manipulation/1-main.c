#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(ULONG_MAX);
    printf("\n");
   /*print_binary(1UL << 31);
    printf("\n");
    print_binary(1UL << 63);
    printf("\n");
    print_binary(0xDEADBEEF);
    printf("\n");
    print_binary(0xCAFEBABE);
    printf("\n");
    print_binary(4294967295);
    printf("\n");*/
    

  /*print_binary(0);
    printf("\n");*/
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
