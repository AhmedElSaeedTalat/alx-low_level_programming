#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "check update");
    hash_table_set(ht, "new_pair", "see what happens");
    
    hash_table_set(ht, "hetairas", "check collisions");
    hash_table_set(ht, "mentioner", "check collisions");
    
    hash_table_set(ht, "heliotropes", "check collisions");
    hash_table_set(ht, "neurospora", "check collisions");
    
    hash_table_set(ht, "depravement", "check collisions");
    hash_table_set(ht, "serafins", "check collisions");
    hash_table_set(ht, "serafins", "new update");
    
    print_table(ht);
    return (EXIT_SUCCESS);
}
