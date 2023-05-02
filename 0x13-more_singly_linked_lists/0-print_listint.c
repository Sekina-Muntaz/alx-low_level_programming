#include <stdio.h>
#include "lists.h"
/**
  * print_listint - function to print all elements of a singly linked list
  * @list_l: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *list_l)
{
	size_t j;

	for (j = 0; list_l; j++)
	{
		printf("%d\n", list_l->i);
		list_l = list_l->next;
	}
	return (j);
}

