#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Frees a list.
* @head: Address of the first node of a list.
**/
void free_listint(listint_t *head)
{
listint_t *temp1,*temp2;
temp2 = head;
while (temp2 != NULL)
{
temp1 = temp2->next;
free(temp2);
temp2 = temp1;
}
}
