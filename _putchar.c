#include <unistd.h>

/**
 * _putchar - write a character
 * @c: the character to print
 *
 * Return: int
 */
int _putchar(char c)
{
	write(stdout, c, 1);
}
