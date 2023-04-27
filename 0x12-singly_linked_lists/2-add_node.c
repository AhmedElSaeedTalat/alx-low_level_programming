#include "lists.h"
/**
  * add_node - adds a new node at the beginning
  *
  * @head: current head of linked list
  *
  * @str: string received
  *
  * Return: new address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
