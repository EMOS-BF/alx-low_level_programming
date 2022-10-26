#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - frees a listint_t list
* @head: pointer to the first node
*/
void free_listint2(listint_t **head)
{
listint_t *temp1, *temp2;
temp2 = *head;
while (temp2 != NULL)
{
temp1 = temp2->next;
free(temp2);
temp2 = temp1;
}
*head = NULL;
}

