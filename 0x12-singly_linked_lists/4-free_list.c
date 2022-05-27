#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer to the first struct in the linked list
 * Return: No Value
 */

void free_list(list_t *head)
{
	list_t *first;

	for (; head;)
	{
		first = head;
		head = head->next;
		free(first);
	}

}
