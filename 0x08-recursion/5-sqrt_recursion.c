#include "main.h"
/**
 * sqtChecker - computes square root recursively doing binary search
 *
 * @a: inital number
 *
 * @b: last number within the limit of number
 *
 * @m: given number
 *
 * Return: 1 if not found sqrroot, else sqrroot
 */
int checker(int a, int b, int c)
{
long int x;
if (b >= a)
{
x = a + (b - a) / 2;
if (x * x == c)
return (x);
/* following binary search */
if (x * x > c)
return (checker(a, x - 1, c));
if (x *x < c)
return (checker(x + 1, b, c));
}
return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 *
 * @n: given number
 *
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
return (checker(1, n, n));
}
