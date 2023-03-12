#include <stdio.h>
/**
 * print_alphabet- prints alphabets
 * Description: printing alphabets
 * returns alphabet
*/
void print_alphabet(char c)
{
putchar(c);
}
/**
 * main- main function
 * Description: printing alphabets
 * Return: 0;
*/
int main(void)
{
char c = 'a';
while (c < 'z')
{
print_alphabet(c);
c++;
}
putchar('\n');
return (0);
}
