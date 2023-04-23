#include "main.h"
#include  <unistd.h>
/**
 *_putchar - print _putchar
 * @c: character
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
