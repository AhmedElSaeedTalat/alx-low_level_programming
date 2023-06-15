#include <stdio.h>
#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a linked list
  *
  * @head: head of the provided node
  *
  * @index: index to provide the node
  *
  * Return: the nth node of a linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr != NULL)
	{
		if (index == counter)
			return (curr);
		curr = curr->next;
		counter++;
	}
	return (NULL);
}
