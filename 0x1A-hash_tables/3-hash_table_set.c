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
	unsigned long int length = 0;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	length = strlen(key) + 500;
	item->key = malloc(sizeof(char) * length);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	length = strlen(value) + 500;
	item->value = malloc(sizeof(char) * length + 1);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	return (item);
}
/**
  * helper_function - helper function to compare keys and set new keys
  *
  * @key: key passed
  * @value: value for the key passed
  * @ht: table passed to the function
  *
  * Return: Always 1 (Success) and 0 (Failure)
  */
int helper_function(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *current;

	index = key_index((const unsigned char *) key, ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		strcpy(ht->array[index]->value, value);
		return (1);
	} else if (ht->array[index]->next != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				strcpy(current->value, value);
				return (1);
			}
			current = current->next;
		}
	}
	item = create_item(key, value);
	current = ht->array[index];
	if (item != NULL)
	{
		while (current->next)
			current = current->next;
		current->next = item;
		return (1);
	}
	return (0);
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
	unsigned long int index, helper;
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
		helper = helper_function(ht, key, value);
		return (helper);
	}
	return (0);
}
