#include "lists.h"
/**
  * listint_len -function that  gets the number of elements in a list
  * @list_l: singly linked list to print
  * Return: number of elements in the list
  */
size_t listint_len(const listint_t *list_l)
{
	size_t i;

	for (i = 0; list_l; i++)
		list_l = list_l->next;
	return (i);
}

