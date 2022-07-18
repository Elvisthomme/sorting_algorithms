#include "sort.h"

/**
  * permutate - permutate two node double linked list
  *
  * @list: the double linked list
  * @f: the first node
  * @s: the second list
  */
void permutate(listint_t **list, listint_t *f, listint_t *s)
{
	listint_t *f_p = f->prev;
	listint_t *s_n = s->next;

	if (f_p)
		f_p->next = s;
	else
		*list = s;
	if (s_n)
		s_n->prev = f;
	s->prev = f_p;
	f->next = s_n;
	s->next = f;
	f->prev = s;
}

/**
  * insertion_sort_list - sort a double linked list using insertion_sort
  *
  * @list: the list to sort
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *head;

	if (list)
	{
		head = *list;
		while (head)
		{
			node = head;
			while (node->prev)
			{
				if (node->n < node->prev->n)
				{
					permutate(list, node->prev, node);
					print_list(*list);
				}
				else
					node = node->prev;
			}
			head = head->next;
		}
	}
}
