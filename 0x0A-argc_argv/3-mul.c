#include<stdio.h>
#include "main.h"

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
	int mul, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	mul = numb1 * numb2;
	printf("%d\n", mul);
return (0);
}
