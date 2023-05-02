#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - function to add new nodes to the end of the list
  * @head: current place in the list
  * @i: int to add to the list
  * Return:the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int i)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->i = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
