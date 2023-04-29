#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning
  *
  * @head: head of the list
  *
  * @n: value n of node
  *
  * Return: address if new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
