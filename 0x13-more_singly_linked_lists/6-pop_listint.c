#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - pops off the head of the list and returns its contents
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		n = current->i;
		*head = current->next;
		free(tmp);
	}
	else
		n= 0;
	return (n);
}
