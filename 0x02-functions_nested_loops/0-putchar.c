#include <unistd.h>
#include <stdio.h>
/**
 * putcharo - writes the character c to stdout
 * @c: The character to print
 * main- main will printout the doc
 * Description: main will take the void putcharo and print it
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void putcharo(char c[])
{
printf("%s\n", c);
}
int main(void)
{
	putcharo("_putchar");
	return 0;
}
