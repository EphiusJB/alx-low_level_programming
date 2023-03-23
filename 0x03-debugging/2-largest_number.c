#include"main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest = a, tmp = b;
int looper = 0;

while (looper < 2)
{
if (tmp > largest)
{
largest = tmp;
}

tmp = c;
looper++;
}

return (largest);
}
