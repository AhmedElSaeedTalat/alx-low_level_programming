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

	length = strlen(key) + 1;
	item->key = malloc(sizeof(char) * length);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	length = strlen(value) + 1;
	item->value = malloc(sizeof(char) * length);
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
  * set_key_value - helper function to set new keys
  *
  * @key: key passed
  * @value: value for the key passed
  * @ht: table passed to the function
  *
  * Return: Always 1 (Success) and 0 (Failure)
  */

int set_key_value(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	index = key_index((const unsigned char *) key, ht->size);
	item = create_item(key, value);
	if (item != NULL)
	{
		item->next = ht->array[index];
		ht->array[index] = item;
		return (1);
	}
	return (0);
}

/**
  * cmp_key - helper function to compare keys and set new keys
  *
  * @key: key passed
  * @value: value for the key passed
  * @ht: table passed to the function
  *
  * Return: Always 1 (Success) and 0 (Failure)
  */

int cmp_key(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, set_value;
	hash_node_t *current;
	char *copied_value;

	copied_value = strdup(value);
	index = key_index((const unsigned char *) key, ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = copied_value;
		return (1);
	} else if (ht->array[index]->next != NULL)
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = copied_value;
				return (1);
			}
			current = current->next;
		}
	}
	set_value = set_key_value(ht, key, value);
	return (set_value);
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
	unsigned long int index, val;
	hash_node_t *item;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
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
	}

	val = cmp_key(ht, key, value);
	return (val);

}
