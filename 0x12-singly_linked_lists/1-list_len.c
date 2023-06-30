#include<stdio.h>
#include"lists.h"

/**
* list_len - finds the number of elements of the list.
*
* @h: pointer to the head of the list
*
* Return: returns the number of elements in the list.
*/

size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int count = 0;

tmp = h;

while (tmp != NULL)
{
	count++;
	tmp = tmp->next;
}

return (count);
}
