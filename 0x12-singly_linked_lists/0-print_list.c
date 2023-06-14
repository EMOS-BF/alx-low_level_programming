#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_list-print the elements of a linked list.
*@head:liked list head.
*Return:amount of nodes of the linked list.
*/
size_t print_list(const list_t *head)
{
size_t count = 0;
const list_t *temp;
temp = head;
while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%u] %s\n", temp->len, temp->str);
}
temp = temp->next;
count++;
}
return (count);
}
