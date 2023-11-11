#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything according to the specified format.
 *
 * @format: The format string specifying the types of arguments to print.
 */
void print_all(const char * const format, ...)
{
    /* Variable declarations */
    int i = 0;
    char *str, *separator = "";
    va_list list;

    /* Initialize argument list */
    va_start(list, format);

    /* Process the format string and print the corresponding arguments */
    if (format) {
        while (format[i]) {
            switch (format[i]) {
                case 'c':
                    printf("%s%c", separator, va_arg(list, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(list, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(list, double));
                    break;
                case 's':
                    str = va_arg(list, char *);
                    if (!str) {
                        str = "(nil)";
                    }
                    printf("%s%s", separator, str);
                    break;
                default:
                    i++;
                    continue;
            }

            /* Update the separator for subsequent arguments */
            separator = ", ";
            i++;
        }
    }

    /* Print a newline character */
    printf("\n");

    /* Clean up the argument list */
    va_end(list);
}
