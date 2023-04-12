#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initialize it
 * @size: size of the array
 * @c: variable char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;

if (size == 0)
return (NULL);

x = malloc(size * sizeof(*x));
if (x == NULL)
return (NULL);

for (i = 0; i < size; i++)
x[i] = c;

return (x);
}
