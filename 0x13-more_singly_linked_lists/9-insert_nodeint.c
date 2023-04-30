#include "lists.h"
/**
  * get_len - count array nodes
  *
  * @head: head node
  *
  * Return: array len
  */
int get_len(listint_t **head)
{
	listint_t *curr;
	int i = 0;

	curr = *head;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  *
  * @head: head node
  *
  * @idx: index
  *
  * @n:
  *
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int i, length;

	length = get_len(head);
	if ((*head == NULL && idx != 0) || idx > length)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0 && *head != NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	} else if (idx == 0 && *head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	i = 0;
	while (curr != NULL)
	{
		if (i + 1 == idx)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
