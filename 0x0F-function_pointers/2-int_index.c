#include<stdio.h>
#include"function_pointers.h"

/**
* int_index - searches for an integer
*
* @size: size of the array
* @array: array to be searched
* @cmp: pointer to function
*
* Return: index of the first element for which
* cmp function does not return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int count;
if ((array && size) && cmp)
{
if (size <= 0)
{
return (-1);
}
for (count = 0; count < size; count++)
{
if (cmp(array[count]))
{
return (count);
}

}
return (-1);
}
return (0);
}
