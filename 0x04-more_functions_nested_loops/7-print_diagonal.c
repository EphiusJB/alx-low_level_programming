#include "main.h"
/**
 * print_diagonal - function
 *
 * @n: parameter
 *
 * Return: return value
 */
void print_diagonal(int n)
{
int m = 0;
int i;

if (n > 0)
{
while (m < n)
{
for (i = 0; i < m; i++)
{
_putchar(' ');
}
_putchar('\');
_putchar('\n');
m++;
}
}
else
{
_putchar('\n');
}
}
