#include <stdio.h>
/**
*main - prints out first 100
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int i;
unsigned long n1 = 0, n2 = 1, n3;
for (i = 0; i < 100; i++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;

if (i == 99)
printf("\n");
else
printf(", ");

}}
