#include "lists.h"

/**
 * add_node_end - add a new node at the end of the linked list
 * @head: a pointer to a pointer to the head struct fed in
 * @str: the str fed in to add to the newly appended struct
 * Return: a pointer to the first struct in the new linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *buffer;
	int index = 0;

	first =  malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	for (; str[index]; index++)
		;
	first->str = strdup(str);
	first->len = index;
	first->next = NULL;

	if (*head == NULL)
		*head = first;
	else
	{
		buffer = *head;
		for (; buffer->next;)
			buffer = buffer->next;
		buffer->next = first;
	}
	return (first);
}
