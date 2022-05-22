#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include<math.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _putchar_func(va_list ap);
int _putstr_func(va_list ap);
int _putint_func(va_list ap);
int _putbin_func(va_list ap);
int _puthexL_func(va_list ap);
int _puthexU_func(va_list ap);
int (*switch_func(char c))(va_list);
void print_number(int n);
void print_number_hex(int n);

int revstr(va_list ap);
int _putoct_func(va_list ap);

#endif /* _MAIN_H_ */
