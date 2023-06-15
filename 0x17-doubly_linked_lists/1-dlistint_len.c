#include <stdio.h>
#include "lists.h"
/**
  * dlistint_len - returns the number of elements in a linked
  *
  * @h: list provided
  * Return: the number of elements in a linked
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;
	const dlistint_t *curr;

	if (h == NULL)
		return (0);
	curr = h;
	counter = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		counter++;
	}
	return (counter);
}
