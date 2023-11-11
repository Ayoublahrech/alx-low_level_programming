#ifndef _VARIADIC_H_
#define _VARIADIC_H_

/* Include necessary header files */
#include <stdarg.h>
#include <stdio.h>

/* Function declarations */
extern int _putchar(char c);
extern int sum_them_all(const unsigned int n, ...);
extern void print_numbers(const char *separator, const unsigned int n, ...);
extern void print_strings(const char *separator, const unsigned int n, ...);
extern void print_all(const char * const format, ...);

#endif /* _VARIADIC_H_ */
