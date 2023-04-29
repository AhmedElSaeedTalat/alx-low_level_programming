#include "lists.h"
/**
  * add_nodeint_end -  adds a new node at the end
  *
  * @head: head of the node
  *
  * @n: value n in node
  *
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	return (new);
}
