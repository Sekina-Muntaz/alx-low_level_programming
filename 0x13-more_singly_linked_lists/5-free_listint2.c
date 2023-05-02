#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 -Function that Frees a list and sets its head to NULL
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
