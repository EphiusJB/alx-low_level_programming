#include<stdio.h>
/**
** _pow_recursion -  finds the value of x to the power y.
*
** @x: Number to raise to a power
*
** @y: The power to be raised to
*
** Return: int
*
**/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}

y--;
return (x * _pow_recursion(x, y));
}
