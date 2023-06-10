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
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
return (0);
}
