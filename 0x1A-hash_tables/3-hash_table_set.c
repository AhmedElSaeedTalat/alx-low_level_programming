#include "hash_tables.h"
/**
  * create_item - create new items to insert
  *
  * @key: key passed
  * @value: value for the key passed
  *
  * Return: new item created with key and value
  */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = malloc(sizeof(char) * strlen(key) + 1);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	item->value = malloc(sizeof(char) * strlen(value) + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}


/**
  * hash_table_set - set new items
  *
  * @key: key passed
  * @value: value for the key passed
  * @ht: table passed to the function
  *
  * Return: Always 1 (Success) and 0 (Failure)
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		item = create_item(key, value);
		if (item != NULL)
		{
			ht->array[index] = item;
			return (1);
		} else
			return (0);
	} else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		} else if (ht->array[index]->next != NULL)
		{
			if (strcmp(ht->array[index]->next->key, key) == 0)
			{
				strcpy(ht->array[index]->next->value, value);
				return (1);
			}
		}
		item = create_item(key, value);

		if (item != NULL)
		{
			ht->array[index]->next = item;
			return (1);
		}
		return (0);
	}
	return (0);
}
