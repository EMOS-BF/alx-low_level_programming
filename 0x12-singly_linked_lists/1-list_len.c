#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*list_len-return the number of  elements of a linked list.
*@head:liked list head.
*Return:amount of nodes of the linked list.
*/
size_t list_len(const list_t *head)
{
size_t count = 0;
const list_t *temp;
temp = head;
while (temp != NULL)
{
temp = temp->next;
count++;
}
return (count);
}
