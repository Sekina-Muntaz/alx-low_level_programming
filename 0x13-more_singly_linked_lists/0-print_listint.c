#include <stdio.h>
#include "lists.h"
/**
  * print_listint - function to print all elements of a singly linked list
  * @list_l: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *list_l)
{
	size_t i;

	for (i = 0; list_l; i++)
	{
		printf("%d\n", list_l->n);
		list_l = list_l->next;
	}
	return (i);
}

