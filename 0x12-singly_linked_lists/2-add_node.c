#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (; strlen(str); str++)
	{
	new -> str = strdup(str);
	new -> len = len;
	new -> next = *head;
	*head = str;
	}
	return (new);
}
