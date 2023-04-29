#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  *
  * @head: head node
  *
  * Return: 0 if list empty
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
