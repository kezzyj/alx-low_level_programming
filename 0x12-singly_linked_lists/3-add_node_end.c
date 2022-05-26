#include "main.h"


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first;
	int index = 0;

	first =  malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	for (; str[index]; index++)
		;
	first->str = strdup(str);
	first->len = index;
	
	if (*head == NULL)
		*head = new;
	else
	{
		for (; *head->next == NULL;)
		*head-> = new;
	}
	return (new);
}
