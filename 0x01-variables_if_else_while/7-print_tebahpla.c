#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int ch;
char chx = '\n';
for (ch = 123; ch > 96; ch--)
{
putchar(ch);
}
putchar(chx);

return (0);
}
