#include "main.h"
#include<stdio.h>
/**
* _print_rev_recursion - Write a function that prints a string in reverse.
* @s: This is my entry
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}

int is_palindrome(char *s)
{
if(_print_rev_recursion(s) == s)
{
return (1);
}
return 0;
}
