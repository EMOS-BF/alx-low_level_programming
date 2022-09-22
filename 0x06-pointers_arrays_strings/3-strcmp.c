#include "main.h"
/**
* _strcmp - Write a function that compares two strings.
* @s1: This is the input string
* @s2: This is the input string
* Return: If the strings are equals return "0", if not return other number
*/
int _strcmp(char *s1, char *s2)
{
int count;
while(*s1='\0'&& *s2='\0')
{
if(*s1 != *S2)
{
count =1;
}
s1++;
s2++;
}
if(count ==0)
{
return 0;
}
else
{
return (*s1 - *s2);
}
}
