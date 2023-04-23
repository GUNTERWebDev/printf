#include "main.h"
#include <stdarg.h>
/**
 * _printf_number - Print a decimal number
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int _printf_number(va_list args)
{
	int n = va_arg(args, int);

	_print_number(n);
	return (n);
}
