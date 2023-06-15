#include <stdio.h>
#include "lists.h"
/**
  * free_dlistint - function that frees a dlistint_t list.
  *
  * @head: head of the list provided
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *ptr;

	if (head == NULL)
		return;
	curr = head;
	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
}
