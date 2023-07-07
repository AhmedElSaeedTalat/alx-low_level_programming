#include "hash_tables.h"
/**
  * cmp_key1 - helper function to compare keys and set new keys
  *
  * @key: key passed
  * @ht: table passed to the function
  *
  * Return: Always 1 (Success) and 0 (Failure)
  */

char *cmp_key1(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	} else if (ht->array[index]->next != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
/**
  * hash_table_get - retrieves a value associated with a key
  *
  * @ht: table provided
  * @key: key provided
  *
  * Return: value retrieved
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	value = cmp_key1(ht, key);
	return (value);
}
