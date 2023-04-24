#include "main.h"
int _hexa(va_list args)
{
	int n = va_arg(args, int);
	char arr[20];
	int i = 0;
	int j;

	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		int tmp = 0;
		tmp = n % 16;
		if (tmp < 10)
		{
			arr[i] = tmp + '0';
            		i++;
		}
		else
		{
			arr[i] = tmp + 'A' + 10;
			i++;
		}
	n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(arr[j--]);
	}
	return (i);
}
