#include "sort.h"

/**
 * insertion_sort_list - sort a dll linked list
 *
 * @list: list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !(*list))
		return;

	i = *list;

	while (i)
	{
		while (i->next && (i->n > i->next->n))
		{
			j = i->next;
			i->next = j->next;
			j->prev = i->prev;

			if (i->prev)
				i->prev->next = j;

			if (j->next)
				j->next->prev = i;

			i->prev = j;
			j->next = i;

			if (j->prev)
				i = j->prev;
			else
				*list = j;

			print_list(*list);
		}
		i = i->next;
	}
}
