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

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
return (0);
}