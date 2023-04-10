#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 *
 * @s: input string.
 *
 * Return: integer
 */
int _atoi(char *s)
{
unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
pn *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi *pn);
}


/**
* main - Entry point
*
* @argc: commandline argument count
*
* @argv: array of arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int sum, count;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
	for (count = 1; count < argc; count++)
	{
	if (!_atoi(argv[count]))
	{
	printf("Error\n");
	return (1);
	}
	sum += _atoi(argv[count]);
	}
	printf("%d\n", sum);
	}
return (0);
}
