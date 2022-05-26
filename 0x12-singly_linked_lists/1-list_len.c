#include "lists.h"


size_t list_len(const list_t *h)
{
	size_t length = 0;                                                                                                        
	const list_t *items = h;
	for (; items != NULL; length++)
	{
		items = items->next;
	}
	return (length);
}
