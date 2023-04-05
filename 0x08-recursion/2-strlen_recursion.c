#include<stdio.h>
/**
** _strlen_recursion -  Returns the length of a string.
*
** @s:Pointer to String
*
** Return: int
*
**/

int _strlen_recursion(char *s)
{
static int c;
if (*s != '\0')
{
_strlen_recursion(s + 1);
c++;
}
return (c);
}
