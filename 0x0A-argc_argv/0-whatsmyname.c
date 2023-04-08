#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
* main - Entry point
*
* @argc: commandline argument count
*
* @argv: array of arguments
*
* @strLength: length of the program name returned by ragv[0]
*
* @count: loop counter
*
* Return: returns the valu of argc
*/

int main(int argc, char *argv[])
{
int strLength, count;
count = 0;
strLength = strlen(argv[0]);
while (count < strLength)
{
_putchar(argv[0][count]);
count++;
}
return (argc);
}


