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

if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
else
return (0);
}
