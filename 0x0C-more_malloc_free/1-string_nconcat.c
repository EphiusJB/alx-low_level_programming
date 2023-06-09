#include"main.h"
#include<stdlib.h>

/**
*string_nconcat - concatenates two strings.
*@s1: first string.
*@s2: second string.
*@n: amount of bytes.
*
*Return: pointer to the allocated memory.
*if malloc fails, status value is equal to 98.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strout;
unsigned int str1, str2, nsout, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (str1 = 0; s1[str1] != '\0'; str1++)
;

for (str2 = 0; s2[str2] != '\0'; str2++)
;

if (n > str2)
n = str2;

nsout = str1 + n;

strout = malloc(nsout + 1);

if (strout == NULL)
return (NULL);

for (i = 0; i < nsout; i++)
{
if (i < str1)
	strout[i] = s1[i];
else
	strout[i] = s2[i - str1];
}
strout[i] = '\0';

return (strout);
}
