#include <stdio.h>
#include "lists.h"
/**
  * print_dlistint - prints all the elements of a dlistint_t
  *
  * @h: list provided
  * Return: number of Nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t counter = 0;

	if (h == NULL)
		return (0);
	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		counter++;
	}
	return (counter);
}
