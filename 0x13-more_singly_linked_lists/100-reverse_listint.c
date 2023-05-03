#include "lists.h"
/**
  * reverse_listint - reverses a list
  *
  * @head: head of list received
  *
  * Return: node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;

	ptr = ptr1 = NULL;
	while (*head != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr1;

	}

	*head = ptr;
	return (*head);
}

