#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    /* Variable declaration for argument list */
    va_list ap;

    /* Temporary variables */
    unsigned int i;
    int sum = 0;

    /* Initialize argument list */
    va_start(ap, n);

    /* Iterate over the argument list and calculate the sum */
    for (i = 0; i < n; i++) {
        sum += va_arg(ap, int);
    }

    /* Clean up argument list */
    va_end(ap);

    /* Return the calculated sum */
    return sum;
}

