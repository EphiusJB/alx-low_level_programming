#include<stdio.h>
#include"lists.h"

/**
*print_list - prints all the elements of the list.
*
*@h: pointer to the head of the list
*
*Return: returns the number of elements in the list.
*/

size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int count = 0;
tmp = h;
while (tmp != NULL)
{
if (tmp->str == NULL)
{
printf("[%d] %s", tmp->len, strg);
count++;
tmp = tmp->next;
}
printf("[%d] %s\n", tmp->len, tmp->str);
count++;
tmp = tmp->next;
}
return (count);
}
