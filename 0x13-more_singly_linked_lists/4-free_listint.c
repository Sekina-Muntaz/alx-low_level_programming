#include "lists.h"
#include <stdlib.h>
/**
  * free_listint -frees a listint_t list.
  * @head:current place in list
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
