#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 -Function that Frees a list and sets its head to NULL
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
listint_t *free_space;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		free_space = *head;
		*head = (*(head))->next;
		free(free_space);
	}
	*head = NULL;
}
