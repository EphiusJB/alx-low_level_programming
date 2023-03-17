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
for (ch = 48; ch < 58; ch++)
{
putchar(ch);
if (ch == 57)
{
putchar('\n');
}
else
{
putchar(',');
putchar(32);
}
}

return (0);
}

