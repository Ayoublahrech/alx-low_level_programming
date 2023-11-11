#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    /* Variable declaration for argument list */
    va_list strings;

    /* Temporary variables for loop index and string pointer */
    unsigned int index;
    char *str;

    /* Initialize argument list */
    va_start(strings, n);

    /* Iterate over the argument list and print strings */
    for (index = 0; index < n; index++) {
        str = va_arg(strings, char *);

        if (str == NULL) {
            printf("(nil)");
        } else {
            printf("%s", str);
        }

        if (index != (n - 1) && separator != NULL) {
            printf("%s", separator);
        }
    }

    /* Print a newline character */
    printf("\n");

    /* Clean up argument list */
    va_end(strings);
}
