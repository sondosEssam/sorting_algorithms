#include "sort.h"
/**
 * insertion_sort_list - function
 *@list: arr
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i = NULL, *j = NULL, *save = NULL, *curr = *list;

	if (list == NULL || *list == NULL)
		return;
	while (curr != NULL)
	{
		save = curr->next;
		i = curr->prev;
		while (i != NULL && i->n > curr->n)
		{
		j = i->prev;
		if (j == NULL)
		{
			curr->next->prev = i;
			(i)->next = (curr)->next;
			(i)->prev = curr;
			(curr)->prev = NULL;
			(curr)->next = (i);
			(*list) = curr;
		}
		else
		{
			i->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = i;
			i->prev = curr;
			j->next = curr;
			curr->prev = j;
			curr->next = i;
		}
		 i = j;
		print_list(*list);
		}
	curr = save;
	}
}
