#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - Add new node to a linked list.
* @head: head of the linked list.
* @str: string to add.
* Return: pointer of the new element added to linked list.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = (list_t *)malloc(sizeof(list_t));
if(newnode == NULL)
{
    return NULL;
}
newnode->str = strdup(str);
newnode->len = _strlen(str);
newnode->next= *head;
*head= newnode;
return newnode;
}
