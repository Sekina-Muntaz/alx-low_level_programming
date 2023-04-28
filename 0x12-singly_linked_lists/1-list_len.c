#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 *
 * @l: Parameter with the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *l)
{
	size_t i;

	for (i = 0; l != NULL; i++)
	{
		l = l->next;
	}

	return (i);
}
