#include <stdio.h>
/**
 * print_alphabet- prints alphabets
 * Description: printing alphabets
 * returns alphabet
*/
void print_alphabet(void)
{
char c = 'a';
while (c < 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
/**
 * main- main function
 * Description: printing alphabets
 * Return: 0;
*/
int main(void)
{
print_alphabet();
return (0);
}
