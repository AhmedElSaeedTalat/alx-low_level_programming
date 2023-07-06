#include "hash_tables.h"
/**
  * key_index - Entry point
  *
  * @key: key
  *
  * @size: size
  *
  * Return: Always 0 (Success)
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
