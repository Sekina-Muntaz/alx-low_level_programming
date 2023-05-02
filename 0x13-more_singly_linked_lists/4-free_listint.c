#include "lists.h"
#include <stdlib.h>
/**
  * free_listint -frees a listint_t list.
  * @head:current place in list
  */
void free_listint(listint_t *head)
{
listint_t *freed;

        while (head != NULL)
        {
                freed = head;
                head = head->next;
                free(freed);
        }
}

