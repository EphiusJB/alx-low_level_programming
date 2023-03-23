#include "main.h"

/**
 * _isupper - function that checks for uppercaseor lowercase
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
if (c > 65 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
