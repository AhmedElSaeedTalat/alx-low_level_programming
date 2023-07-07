#include "hash_tables.h"
/**
  * hash_table_print - prints a hash table
  *
  * @ht: table passed
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int counter = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (counter == 1)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			counter = 0;
		}
		else
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i]->next != NULL)
		{
			current = ht->array[i]->next;
			while (current)
			{
				printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
	}
	printf("}\n");
}
