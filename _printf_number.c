#include "main.c"
#include <stdarg.h>

int _printf_number(va_list args)
{
	int n = va_arg(args, int);
	_print_number(n);
	return n;
}
