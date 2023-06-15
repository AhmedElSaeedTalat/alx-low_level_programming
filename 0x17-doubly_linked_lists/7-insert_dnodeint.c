#include <stdio.h>
#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  *
  * @idx: index for the desired node
  * @n: number attached to node
  * @h: haed of the list
  *
  * Return: new node inserted
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;
	unsigned int counter = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	curr = *h;
	while (curr->next != NULL)
	{
		if (idx == counter)
		{
			new_node->prev = curr->prev;
			curr->prev->next = new_node;
			curr->prev = new_node;
			new_node->next = curr;
			return (new_node);
		}
		curr = curr->next;
		counter++;
	}
	if (idx == counter || idx == counter + 1)
	{
		new_node->prev = curr->prev;
		curr->prev->next = new_node;
		curr->prev = new_node;
		new_node->next = curr;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
