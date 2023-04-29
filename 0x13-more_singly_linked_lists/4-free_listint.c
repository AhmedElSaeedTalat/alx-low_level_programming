#include "lists.h"
/**
  * free_listint - frees a list
  *
  * @head: head of the list
  */
void free_listint(listint_t *head)
{
	listint_t *curr, *ptr;

	curr = ptr = head;
	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
}
