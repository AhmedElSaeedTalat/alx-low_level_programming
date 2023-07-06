#include "hash_tables.h"
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
void print_table(hash_table_t *table)
{
	unsigned long int i;

	for (i = 0; i < table->size; i++)
	{
		if (table->array[i] == NULL)
			printf("%ld: -----\n", i);
		else
		{
			printf("%ld: key: %s, value: %s\n", i, table->array[i]->key, table->array[i]->value);
			if (table->array[i]->next != NULL)
				printf("%ld: key: %s, value: %s\n", i, table->array[i]->next->key, table->array[i]->next->value);
		}
				
	}
}
