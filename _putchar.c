#include "main.h"
#include  <unistd.h>
/**
 *_putchar - print _putchar
 * @c: character
 * Return: On sucess 1
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
