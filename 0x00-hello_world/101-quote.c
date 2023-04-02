#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
char b[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i;
for (i = 0; i < sizeof(b); i++)
_putchar(b[i]);
return 1;
}

