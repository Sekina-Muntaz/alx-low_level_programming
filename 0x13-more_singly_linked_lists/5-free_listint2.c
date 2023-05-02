#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 -Function that Frees a list and sets its head to NULL
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
listint_t *freed;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}
