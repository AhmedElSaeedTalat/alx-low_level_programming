#include "lists.h"
/**
  * listint_len -  returns the number of elements
  *
  * @h: node received
  *
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
