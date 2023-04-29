#include "lists.h"
/**
  * free_listint2 -  frees a listint_t list
  *
  * @head: head of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *curr, *ptr;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	curr = ptr = *head;
	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
	*head = NULL;
}
