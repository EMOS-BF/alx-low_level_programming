#include "main.h"
/**
* _strlen - Function that returns the length of a string
*
* @s: this is the input string

*
* Return: Lenngth of the string
*/
int _strlen(char *s)
{

int len;
while(*s !='\0'){
len+=1;
*s=*s+1;
}
return (len);
}

