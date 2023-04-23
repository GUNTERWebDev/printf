#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_number(int n);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_number(va_list args);
int _printf_number(va_list args);
int _printf_percent(va_list args);
int (*printf_func)(va_list);
#endif /* MAIN */
