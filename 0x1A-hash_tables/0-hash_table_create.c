#include "hash_tables.h"
/**
  * hash_table_create - creating hash table
  * @size: size of the hash table
  *
  * Return: cteated hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) malloc(sizeof(hash_node_t) * table->size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
