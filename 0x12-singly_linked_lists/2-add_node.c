#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: a pointer to a pointer to a linked list
 * @str: a constant character pointer for a string input
 * Return: a pointer to the newly made structure
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
