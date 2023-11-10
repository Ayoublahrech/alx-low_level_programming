/*
 * function_pointers.h
 *
 * This header file defines the prototypes for the following functions:
 *
 * - print_name(): Prints the given name to the console, using the given function
 *   to determine the format of the output.
 * - _putchar(): Prints a single character to the console.
 * - array_iterator(): Iterates over the given array and applies the given function
 *   to each element of the array.
 * - int_index(): Searches the given array for an element that satisfies the given
 *   comparison function, and returns the index of that element, or -1 if no
 *   such element is found.
 *
 * This header file also includes the necessary standard header files.
 */

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/* Function prototypes */
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
