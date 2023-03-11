#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
/**
 * main - main block print
 * Description: to print alphabets from the ANSI and it is really
 * Return: 0
*/
int main(void)
{
int n = 'a';
while (n <= 'z')
{
putchar(n);
if(n=='z')
{
putchar('\n');
}
n++;
}

	return (0);
}
