#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    /* Variable declaration for argument list */
    va_list nums;

    /* Temporary variable for loop index */
    unsigned int index;

    /* Initialize argument list */
    va_start(nums, n);

    /* Iterate over the argument list and print numbers */
    for (index = 0; index < n; index++) {
        printf("%d", va_arg(nums, int));

        if (index != (n - 1) && separator != NULL) {
            printf("%s", separator);
        }
    }

    /* Print a newline character */
    printf("\n");

    /* Clean up argument list */
    va_end(nums);
}
