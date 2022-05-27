#include "lists.h"

/**
 * print_listint - prints the elements of a linked list of structures
 * @h: pointer to the first element
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int index;

	if (h == NULL)

		return (0);

	for (index = 0; h; index++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}

	return (index);

}
