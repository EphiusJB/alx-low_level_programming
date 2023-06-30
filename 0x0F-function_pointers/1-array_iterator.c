#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array of elements to print
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int count;
if ((array && size) && action)
{
for (count = 0; count < size; count++)
{
(*action)(array[count]);
}
}
}
