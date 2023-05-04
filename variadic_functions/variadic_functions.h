#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct letters
{
	char *letters;
	void (*f)(va_list list);
} list_a;

void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);

#endif
