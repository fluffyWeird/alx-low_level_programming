#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
char ch2[] = "\n";
write(2, ch, sizeof(ch));
write(2, ch2, sizeof(ch2));
return (0);
}
