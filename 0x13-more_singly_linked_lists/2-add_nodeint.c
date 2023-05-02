#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint -function to add new nodes to the list
  * @head: current place in the list
  * @i: int to add to the list
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int i)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->i = i;
	new->next = *head;
	*head = new;
	return (*head);
}
