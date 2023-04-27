#include "lists.h"
/**
  * free_list - fun that frees list
  *
  * @head: head of list sent
  */
void free_list(list_t *head)
{
	list_t *ptr, *curr;

	curr = head;
	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr->str);
		free(ptr);
	}
}
