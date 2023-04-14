#include"main.h"
#include<stdlib.h>

/**
* array_range - creates an array of integers.
* @min: minimum value.
* @max: maximum value.
*
* Return: pointer to the newly created array.
* if man > mix, return NULL.
* if malloc fails, return NULL.
*/

int *array_range(int min, int max)
{
int *aray;
int count;

if (min > max)
	return (NULL);

aray = malloc(sizeof(*aray) * ((max - min) + 1));

if (aray == NULL)
	return (NULL);

for (coun = 0; min <= max; count++, min++)
	aray[count] = min;

return (aray);
}
