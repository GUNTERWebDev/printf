#include "main.h"
/**
 * _print_number - print a given number using _putchar
 * @n: number to be printed
 * Return: void
 */
int _print_number(int n)
{
	int num = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		num++;
	}

	if (n / 10)
		num += _print_number(n / 10);

	_putchar((n % 10) + '0');
	num++;
	return (num);
}
