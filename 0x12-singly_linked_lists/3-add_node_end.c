#include "lists.h"
/**
  * s_len - count length
  *
  * @str: str received
  *
  * Return: count
  */
int s_len(const char *str)
{
	int count;
	const char *ptr = str;

	count = 0;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return (count);
}
/**
  * add_node_end - new node at the end of a list_t list.
  *
  * @head: head of list
  *
  * @str: string received
  *
  * Return: address new
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = s_len(str);
	new->next = NULL;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;
	return (new);
}
