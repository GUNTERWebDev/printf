#include "main.h"
int _uns(va_list args)
{
	int n = va_arg(args, int);
	return (_number(n));
}
