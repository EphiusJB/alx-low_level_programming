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
for (ch = 97; ch < 123; ch++)
{
if (ch == 101 || ch == 113)
{
}
else
putchar(ch);
}
putchar(chx);

return (0);
}

