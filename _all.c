#include "main.h"

int _all(va_list args,char format)
{
	int num = 0;
	if (format == 'x')
	{
		num += _hexa(args);
	}
	if (format == 'u')
	{
		num += _uns(args);
	}
	return (num);
}
