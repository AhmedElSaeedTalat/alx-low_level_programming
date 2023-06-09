#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list
  *
  * @h: received list
  *
  * Return: number of elemets
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
