#include "hash_tables.h"
/**
  * hash_table_delete - delete a hash table
  *
  * @ht: tables passed to function
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *ptr;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				current = ht->array[i]->next;
				while (current)
				{
					ptr = current;
					free(current->key);
					free(current->value);
					current = current->next;
					free(ptr);
				}
			}
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
