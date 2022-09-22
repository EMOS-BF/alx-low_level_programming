#include "main.h"
/**
* _strcmp - Write a function that compares two strings.
* @s1: This is the input string
* @s2: This is the input string
* Return: If the strings are equals return "0", if not return other number
*/
int _strcmp(char *s1, char *s2)
{
int count,val;
while(s1[count]==s2[count]&& s1='\0')
{
count++
}
val = s1[count] - s2[count];
return val;
}
