#include "lists.h"

/**
* list_len - print length of all  elements of a list
* @h: a linked list structure
* Return: a size_t variable which is a system specific integer
*/

size_t list_len(const list_t *h)
{
	size_t length; 
	const list_t *items = h;

	for (length = 0; items != NULL; length++)
		items = items->next;
	return (length);
}
