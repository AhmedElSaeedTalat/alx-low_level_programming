#include <stdio.h>
#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index
  *
  * @head: head of linked list
  * @index: index of node in the list
  *
  * Return: 1 if succeded , -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *ptr;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	} else if (index == 0 && (*head)->next != NULL)
	{
		ptr = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	curr = *head;
	while (curr != NULL)
	{
		if (index == counter + 1 && curr->next == NULL)
		{
			curr->prev->next = NULL;
			free(curr);
			return (1);
		}
		if (index == counter)
		{
			curr->next->prev = curr->prev;
			curr->prev->next = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		counter++;
	}
	return (-1);
}
