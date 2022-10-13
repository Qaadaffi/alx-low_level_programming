#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct printer - is a new struct type defining a printer.
 * @symbol: is a symbol that represent a data type.
 * @print: is a pointer to a function that prints a data type corresponding 
 * to the symbol.
 */

typedef struct printer

{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
