#include "lists.h"

/**
 * listint_len - function to print elements of array
 * @h: variable containing elements
 * Return: return number of elements
 */

size_t listint_len(const listint_t *h)
{
	int index;

	if (h == NULL)
		return (0);
	for(index = 0; h; index++)
		h = head->next;

	return (index);
}
